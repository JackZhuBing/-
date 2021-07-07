#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/errno.h>
#include <linux/err.h>
#include <linux/string.h>
#include <linux/sched.h>
#include <linux/dcache.h>
#include <asm/fcntl.h>
#include <asm/processor.h>
#include <asm/uaccess.h>

static int __init hello_init(void)
{
    int ret;
    struct file *fp;
    mm_segment_t old_fs;
    loff_t pos;
    char buf[30];

    printk(KERN_INFO "=====hello_init=====\n");
    fp = filp_open("/oem/test",O_RDONLY, 0);
    if (IS_ERR(fp)) {
        ret = PTR_ERR(fp);
        printk(KERN_INFO "/oem/test open failed,err = %d\n", ret);
        return ret;
    }

    old_fs = get_fs();
    set_fs(KERNEL_DS);

    pos = fp->f_pos;
    
    //pos = 0;
    ret = vfs_read(fp, buf, 128, &pos);
    if (!ret) {
        ret = -EINVAL;
        printk(KERN_INFO "vfs read failed\n");
        return ret;
    }

    printk(KERN_INFO "f_pos = %lld,pos = %lld,buf = %s\n",
        fp->f_pos, pos, buf);

    set_fs(old_fs);
    filp_close(fp, NULL);

    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "hello_exit\n");
}

module_init(hello_init);
module_exit(hello_exit);
