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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x96049d34, "kmalloc_caches" },
	{ 0xc95e94a7, "ieee80211_queue_work" },
	{ 0x5587941b, "dev_set_drvdata" },
	{ 0x8211d9b, "wl1251_free_hw" },
	{ 0xba876fa0, "spi_setup" },
	{ 0xa7587646, "crc7" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0x9d3ba484, "driver_unregister" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xb72204b1, "spi_sync" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xdc0289d0, "wl1251_init_ieee80211" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x5cf13db2, "ieee80211_free_hw" },
	{ 0xea50e699, "spi_register_driver" },
	{ 0x11ed17f9, "wl1251_alloc_hw" },
	{ 0xb365dbea, "dev_get_drvdata" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,wl1251";


MODULE_INFO(srcversion, "9C650D5EFF67B35465D32E7");
