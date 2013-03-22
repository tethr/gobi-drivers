#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf6628fc9, "module_layout" },
	{ 0xd6a968fe, "cdev_del" },
	{ 0x53822150, "kmalloc_caches" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x88dc55cf, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xadaabe1b, "pv_lock_ops" },
	{ 0xcdff963, "usbnet_resume" },
	{ 0xed05ad29, "usbnet_probe" },
	{ 0x654f9519, "usbnet_disconnect" },
	{ 0x546fa66c, "netif_carrier_on" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf22449ae, "down_interruptible" },
	{ 0x327207e3, "netif_carrier_off" },
	{ 0x6efb6547, "usb_kill_urb" },
	{ 0xf6fd5309, "device_destroy" },
	{ 0x3e9889a7, "filp_close" },
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0xf555713b, "usb_autopm_get_interface" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x95272a9e, "kthread_create_on_node" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6395be94, "__init_waitqueue_head" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xde0bdcff, "memset" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0xf147ecb1, "down_trylock" },
	{ 0x3ac8c215, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0xfd1e3796, "usb_set_interface" },
	{ 0x15ddbdc, "wait_for_completion_interruptible" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0xd6dbe3b3, "usb_control_msg" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x68aca4ad, "down" },
	{ 0x6c075966, "device_create" },
	{ 0x9c452f8a, "usbnet_suspend" },
	{ 0xffc49657, "dev_kfree_skb_any" },
	{ 0x2b140f5e, "cdev_add" },
	{ 0xf3f42087, "init_task" },
	{ 0xdc9f2ef7, "usb_submit_urb" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x50053c53, "wake_up_process" },
	{ 0x4a21112a, "kmem_cache_alloc_trace" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x236c8c64, "memcpy" },
	{ 0x71e3cecb, "up" },
	{ 0x63afefa5, "usb_register_driver" },
	{ 0x5722473f, "class_destroy" },
	{ 0x4b06d2e7, "complete" },
	{ 0x50720c5f, "snprintf" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xdc5e7ab3, "__class_create" },
	{ 0xb2798ef9, "dev_get_drvdata" },
	{ 0x459459ad, "usb_free_urb" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0x41e09a6, "usb_autopm_put_interface" },
	{ 0x76e9dff4, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v1410pA021d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410pA023d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "0766F7C579BFC0A2F0ADAE0");
