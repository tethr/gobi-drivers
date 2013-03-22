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
	{ 0x86b62912, "usb_serial_resume" },
	{ 0x1007783c, "usb_serial_disconnect" },
	{ 0x896ac949, "usb_serial_probe" },
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0x3ac8c215, "usb_deregister" },
	{ 0x55d84b09, "usb_serial_deregister" },
	{ 0x63afefa5, "usb_register_driver" },
	{ 0xb3eb1e, "usb_serial_register" },
	{ 0xfd1e3796, "usb_set_interface" },
	{ 0x44e880ce, "usb_serial_generic_open" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9b5840be, "usb_bulk_msg" },
	{ 0x27e1a049, "printk" },
	{ 0x73b64722, "usb_serial_suspend" },
	{ 0xb2798ef9, "dev_get_drvdata" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v05C6p920Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05C6p920Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410pA021d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410pA023d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "AAB700182B089C42D9ADC68");
