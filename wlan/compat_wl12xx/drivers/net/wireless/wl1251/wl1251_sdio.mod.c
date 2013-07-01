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
	{ 0xe9fa879e, "sdio_writeb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x96049d34, "kmalloc_caches" },
	{ 0x9a05b70b, "__pm_runtime_idle" },
	{ 0xc95e94a7, "ieee80211_queue_work" },
	{ 0x5587941b, "dev_set_drvdata" },
	{ 0x2b8cbdb3, "sdio_enable_func" },
	{ 0x8211d9b, "wl1251_free_hw" },
	{ 0x74b5d87e, "sdio_writeb_readb" },
	{ 0x39068c4b, "sdio_claim_irq" },
	{ 0x6c1d90a7, "__pm_runtime_resume" },
	{ 0x94864c7a, "wl12xx_get_platform_data" },
	{ 0x27e1a049, "printk" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xb7e9581e, "sdio_unregister_driver" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x79f034ff, "sdio_release_irq" },
	{ 0xdc0289d0, "wl1251_init_ieee80211" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0x91d9d526, "sdio_memcpy_toio" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xc90489e9, "sdio_register_driver" },
	{ 0xaca0f36e, "sdio_memcpy_fromio" },
	{ 0xc6a5b706, "sdio_claim_host" },
	{ 0x11ed17f9, "wl1251_alloc_hw" },
	{ 0xb365dbea, "dev_get_drvdata" },
	{ 0x4ca63651, "sdio_set_block_size" },
	{ 0x3dd175ab, "sdio_disable_func" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x952a9efc, "sdio_release_host" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,wl1251";

MODULE_ALIAS("sdio:c*v104Cd9066*");

MODULE_INFO(srcversion, "E2E94467FB492C3DEBB9E6F");
