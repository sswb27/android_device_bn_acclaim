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
	{ 0x9a05b70b, "__pm_runtime_idle" },
	{ 0x5587941b, "dev_set_drvdata" },
	{ 0xc946cc40, "sdio_writesb" },
	{ 0x2b8cbdb3, "sdio_enable_func" },
	{ 0x6c1d90a7, "__pm_runtime_resume" },
	{ 0x94864c7a, "wl12xx_get_platform_data" },
	{ 0xc8da69a1, "sdio_get_host_pm_caps" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xe3cd890f, "dev_err" },
	{ 0x653c2828, "platform_device_del" },
	{ 0x8721b647, "platform_device_alloc" },
	{ 0x288d734e, "platform_device_add" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x340833d, "sdio_readsb" },
	{ 0xb7e9581e, "sdio_unregister_driver" },
	{ 0xa3fdd272, "platform_device_add_resources" },
	{ 0xc053c5c1, "sdio_f0_writeb" },
	{ 0x8ac6ecff, "sdio_set_host_pm_flags" },
	{ 0x75576579, "sdio_f0_readb" },
	{ 0xc10a89ab, "platform_device_add_data" },
	{ 0xc9e7013b, "mmc_power_save_host" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0x980513f2, "mmc_power_restore_host" },
	{ 0x91d9d526, "sdio_memcpy_toio" },
	{ 0x37a0cba, "kfree" },
	{ 0xc90489e9, "sdio_register_driver" },
	{ 0xaca0f36e, "sdio_memcpy_fromio" },
	{ 0xc6a5b706, "sdio_claim_host" },
	{ 0xb365dbea, "dev_get_drvdata" },
	{ 0x4ca63651, "sdio_set_block_size" },
	{ 0x3dd175ab, "sdio_disable_func" },
	{ 0x952a9efc, "sdio_release_host" },
	{ 0x855015a2, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v0097d4076*");

MODULE_INFO(srcversion, "15440656114D245BDE60C9B");
