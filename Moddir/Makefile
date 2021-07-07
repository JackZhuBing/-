CROSS_COMPILE=/home/zhub/rtl8821/rockchip_rk3308b_sdk/prebuilts/gcc/linux-x86/aarch64/gcc-linaro-6.3.1-2017.05-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-
ARCH=arm64
KSRC=/home/zhub/rtl8821/rockchip_rk3308b_sdk/kernel
ifneq ($(KERNELRELEASE),)
	obj-m		:= test_kernel.o

else
	PWD := $(shell pwd)
	KVER := $(shell uname -r)
	KDIR := /lib/modules/$(KVER)/build

all:
	#$(MAKE) -C $(KDIR) M=$(PWD) modules
	$(MAKE) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KSRC) M=$(shell pwd)  modules
clean:
	rm -rf *.o *.mod.c *.mod.o *.ko *.symvers *.order *.a

endif
