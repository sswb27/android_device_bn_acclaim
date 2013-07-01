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
	{ 0x22e29f17, "module_layout" },
	{ 0xfee2def4, "usb_deregister" },
	{ 0xe70628fe, "usb_register_driver" },
	{ 0xb52da6eb, "usb_match_id" },
	{ 0xaf1f71f0, "release_firmware" },
	{ 0x9ed2bfb6, "request_firmware" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0x96049d34, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b599289, "bt_printk" },
	{ 0x3464e2ba, "usb_bulk_msg" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0x337753eb, "usb_control_msg" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v0CF3p3000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0CF3p3002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13D3p3304d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0930p0215d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p311Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0CF3p3004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0489pE02Cd*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "6851864D41885FB0DABD913");
