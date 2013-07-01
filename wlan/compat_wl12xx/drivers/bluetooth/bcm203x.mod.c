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
	{ 0xf3fee57c, "usb_submit_urb" },
	{ 0x96049d34, "kmalloc_caches" },
	{ 0x4b599289, "bt_printk" },
	{ 0x8949858b, "schedule_work" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xaf1f71f0, "release_firmware" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9ed2bfb6, "request_firmware" },
	{ 0xe1582565, "usb_alloc_urb" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb909f179, "usb_free_urb" },
	{ 0x5587941b, "dev_set_drvdata" },
	{ 0x765fab8d, "usb_kill_urb" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb365dbea, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v0A5Cp2033d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "DCD8C5172505945434A6A41");
