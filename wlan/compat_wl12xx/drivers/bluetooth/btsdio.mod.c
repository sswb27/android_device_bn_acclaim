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
	{ 0xb7e9581e, "sdio_unregister_driver" },
	{ 0xc90489e9, "sdio_register_driver" },
	{ 0x4b599289, "bt_printk" },
	{ 0x460db508, "skb_queue_head" },
	{ 0x7d5b4d1b, "skb_pull" },
	{ 0xc946cc40, "sdio_writesb" },
	{ 0xf5cfb57c, "skb_push" },
	{ 0x3d0eb6c2, "skb_dequeue" },
	{ 0xb816d30e, "kfree_skb" },
	{ 0x87b716a9, "hci_recv_frame" },
	{ 0xcd462668, "skb_put" },
	{ 0x92192b17, "__alloc_skb" },
	{ 0x340833d, "sdio_readsb" },
	{ 0x12e1cc5e, "sdio_readb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x39068c4b, "sdio_claim_irq" },
	{ 0x2b8cbdb3, "sdio_enable_func" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x952a9efc, "sdio_release_host" },
	{ 0x3dd175ab, "sdio_disable_func" },
	{ 0x79f034ff, "sdio_release_irq" },
	{ 0xe9fa879e, "sdio_writeb" },
	{ 0xc6a5b706, "sdio_claim_host" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x1b59e5dd, "skb_queue_purge" },
	{ 0x8949858b, "schedule_work" },
	{ 0x36873e17, "skb_queue_tail" },
	{ 0x96049d34, "kmalloc_caches" },
	{ 0x3b56e072, "hci_register_dev" },
	{ 0xec35834d, "hci_alloc_dev" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x394d5ebf, "hci_free_dev" },
	{ 0x4d91e019, "hci_unregister_dev" },
	{ 0x5587941b, "dev_set_drvdata" },
	{ 0xb365dbea, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "CAD66F44D1BAF1B52AA8ECC");
