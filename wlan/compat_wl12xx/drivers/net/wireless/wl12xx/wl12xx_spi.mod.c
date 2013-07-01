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
	{ 0x96049d34, "kmalloc_caches" },
	{ 0x5587941b, "dev_set_drvdata" },
	{ 0xba876fa0, "spi_setup" },
	{ 0xa7587646, "crc7" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xe3cd890f, "dev_err" },
	{ 0x653c2828, "platform_device_del" },
	{ 0x8721b647, "platform_device_alloc" },
	{ 0x9d3ba484, "driver_unregister" },
	{ 0x288d734e, "platform_device_add" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xb72204b1, "spi_sync" },
	{ 0xa3fdd272, "platform_device_add_resources" },
	{ 0xc10a89ab, "platform_device_add_data" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xea50e699, "spi_register_driver" },
	{ 0xb365dbea, "dev_get_drvdata" },
	{ 0x855015a2, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "293169F049BB90C7B097DD9");
