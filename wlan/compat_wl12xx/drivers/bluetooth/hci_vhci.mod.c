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
	{ 0x6dce417, "no_llseek" },
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0x5bc601b, "misc_deregister" },
	{ 0xbd92c4a4, "misc_register" },
	{ 0xd85cd67e, "__wake_up" },
	{ 0x36873e17, "skb_queue_tail" },
	{ 0xf5cfb57c, "skb_push" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x460db508, "skb_queue_head" },
	{ 0x1cfb04fa, "finish_wait" },
	{ 0x499cb58c, "prepare_to_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x3d0eb6c2, "skb_dequeue" },
	{ 0xb816d30e, "kfree_skb" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x87b716a9, "hci_recv_frame" },
	{ 0x7d5b4d1b, "skb_pull" },
	{ 0xcd462668, "skb_put" },
	{ 0x92192b17, "__alloc_skb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x1b59e5dd, "skb_queue_purge" },
	{ 0x96049d34, "kmalloc_caches" },
	{ 0x4b599289, "bt_printk" },
	{ 0x24b0fbb3, "nonseekable_open" },
	{ 0x3b56e072, "hci_register_dev" },
	{ 0xec35834d, "hci_alloc_dev" },
	{ 0xa58f3a59, "__init_waitqueue_head" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x394d5ebf, "hci_free_dev" },
	{ 0x4d91e019, "hci_unregister_dev" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "AAF445FB3DD1E456E2BFBC3");
