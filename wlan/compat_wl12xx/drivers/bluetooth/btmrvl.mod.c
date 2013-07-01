#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x22e29f17, "module_layout" },
	{ 0x460db508, "skb_queue_head" },
	{ 0x96049d34, "kmalloc_caches" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x6205c1ca, "debugfs_create_dir" },
	{ 0x3b56e072, "hci_register_dev" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x4c86184b, "remove_wait_queue" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x41237fb6, "debugfs_create_file" },
	{ 0x4d91e019, "hci_unregister_dev" },
	{ 0x9be0fdab, "skb_realloc_headroom" },
	{ 0x980b3241, "kthread_create_on_node" },
	{ 0x4b599289, "bt_printk" },
	{ 0xa58f3a59, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x1b59e5dd, "skb_queue_purge" },
	{ 0x4266970d, "default_llseek" },
	{ 0x51d559d1, "_raw_spin_unlock_irqrestore" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x92f9be69, "kthread_stop" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0xec35834d, "hci_alloc_dev" },
	{ 0x3ecca81f, "debugfs_remove" },
	{ 0xf5cfb57c, "skb_push" },
	{ 0x36873e17, "skb_queue_tail" },
	{ 0x92192b17, "__alloc_skb" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb816d30e, "kfree_skb" },
	{ 0xb2c930e0, "wake_up_process" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0x598542b2, "_raw_spin_lock_irqsave" },
	{ 0xd85cd67e, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0xc7bcbc8d, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x499cb58c, "prepare_to_wait" },
	{ 0x1cfb04fa, "finish_wait" },
	{ 0x3d0eb6c2, "skb_dequeue" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x394d5ebf, "hci_free_dev" },
	{ 0xcd462668, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "201B8F7507F72940245D4EB");
