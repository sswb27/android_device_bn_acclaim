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
	{ 0xddb67e0e, "hci_conn_put_device" },
	{ 0x460db508, "skb_queue_head" },
	{ 0xc1319aad, "hid_add_device" },
	{ 0x96049d34, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3968206, "sock_init_data" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x3970cc70, "up_read" },
	{ 0x980bc16c, "kernel_sendmsg" },
	{ 0x927f02e6, "sockfd_lookup" },
	{ 0x8a63c17c, "hci_conn_hold_device" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x920a2baa, "del_timer" },
	{ 0x5587941b, "dev_set_drvdata" },
	{ 0x352e6ed4, "sock_no_setsockopt" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x9bda9bc2, "hid_parse_report" },
	{ 0x81c7e243, "sock_no_getsockopt" },
	{ 0x4c86184b, "remove_wait_queue" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8e6d9e7c, "sock_no_getname" },
	{ 0xd68120bb, "init_timer_key" },
	{ 0xa6b09f27, "mutex_unlock" },
	{ 0x24fb075e, "bt_sock_register" },
	{ 0x980b3241, "kthread_create_on_node" },
	{ 0x58ed2636, "sock_no_poll" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa3d2831b, "hid_input_report" },
	{ 0x4b599289, "bt_printk" },
	{ 0x45e21466, "down_read" },
	{ 0x77b303ee, "__pskb_pull_tail" },
	{ 0x28aa9f96, "input_event" },
	{ 0xa58f3a59, "__init_waitqueue_head" },
	{ 0xe0512149, "sock_no_mmap" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x9d1ae78f, "sock_no_recvmsg" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x1b59e5dd, "skb_queue_purge" },
	{ 0x4202a842, "hci_get_route" },
	{ 0x5277750c, "sock_no_socketpair" },
	{ 0xc3e0015f, "sk_alloc" },
	{ 0xca22fe1c, "mutex_lock_interruptible" },
	{ 0xe2e93e61, "__mutex_init" },
	{ 0x6a316851, "sock_no_bind" },
	{ 0x4141f80, "__tracepoint_module_get" },
	{ 0x71c90087, "memcmp" },
	{ 0x328a05f1, "strncpy" },
	{ 0x484f4665, "sock_no_listen" },
	{ 0xc290adac, "mutex_lock" },
	{ 0xc465fc79, "sock_no_accept" },
	{ 0xfe58de59, "sk_free" },
	{ 0x1fc6d3c2, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf19294db, "bt_sock_unregister" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x7d5b4d1b, "skb_pull" },
	{ 0xd47a48c, "up_write" },
	{ 0xf9ef8305, "down_write" },
	{ 0x36adf2fd, "fput" },
	{ 0x3e274e3f, "sock_no_shutdown" },
	{ 0x9fe97e9e, "module_put" },
	{ 0x36873e17, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4d4ce7a7, "proto_register" },
	{ 0xc2066af0, "batostr" },
	{ 0x92192b17, "__alloc_skb" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x6a8692aa, "input_register_device" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb816d30e, "kfree_skb" },
	{ 0xc72da819, "proto_unregister" },
	{ 0x2a2123e8, "__module_put_and_exit" },
	{ 0xb2c930e0, "wake_up_process" },
	{ 0x5344dd4a, "hid_destroy_device" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0xa734dbb7, "hid_allocate_device" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xd85cd67e, "__wake_up" },
	{ 0xbbb54000, "sock_no_connect" },
	{ 0x8bd0a3fd, "_raw_write_unlock_bh" },
	{ 0xc7bcbc8d, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xbaba8ba3, "input_unregister_device" },
	{ 0x499cb58c, "prepare_to_wait" },
	{ 0x59d7138b, "sock_no_sendmsg" },
	{ 0xafc07856, "set_user_nice" },
	{ 0x81d792fc, "__hid_register_driver" },
	{ 0x85061b76, "_raw_write_lock_bh" },
	{ 0x1cfb04fa, "finish_wait" },
	{ 0x3d0eb6c2, "skb_dequeue" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x70f14395, "hid_unregister_driver" },
	{ 0xcd462668, "skb_put" },
	{ 0xb365dbea, "dev_get_drvdata" },
	{ 0x4dec6038, "memscan" },
	{ 0x5d10c891, "hid_output_report" },
	{ 0xbb2667dd, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "8CDB4159339E72BF6A1CF4A");
