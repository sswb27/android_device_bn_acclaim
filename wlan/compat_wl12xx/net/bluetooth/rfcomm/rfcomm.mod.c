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
	{ 0x460db508, "skb_queue_head" },
	{ 0x536e91d6, "release_sock" },
	{ 0x96049d34, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3968206, "sock_init_data" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x8384a2c5, "tty_unlock" },
	{ 0x980bc16c, "kernel_sendmsg" },
	{ 0x5fc56a46, "_raw_spin_unlock" },
	{ 0x77ecf9, "single_open" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x920a2baa, "del_timer" },
	{ 0x5587941b, "dev_set_drvdata" },
	{ 0x94c2c808, "single_release" },
	{ 0x4c86184b, "remove_wait_queue" },
	{ 0xf121ff68, "alloc_tty_driver" },
	{ 0xbae5de1c, "bt_sock_poll" },
	{ 0xf0e88975, "sock_release" },
	{ 0x7b6646bb, "_raw_read_lock" },
	{ 0x1c8be138, "hci_register_cb" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x652d939e, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x233321f0, "bt_sock_ioctl" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xd3d45f1f, "queue_work" },
	{ 0xf2eab30a, "tty_register_driver" },
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0xd68120bb, "init_timer_key" },
	{ 0x55d534b3, "sock_create_kern" },
	{ 0xa6b09f27, "mutex_unlock" },
	{ 0x71979973, "put_tty_driver" },
	{ 0x24fb075e, "bt_sock_register" },
	{ 0xdf588b71, "kernel_listen" },
	{ 0x41237fb6, "debugfs_create_file" },
	{ 0x36a45a5c, "hci_conn_check_secure" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x395af3d8, "seq_read" },
	{ 0x980b3241, "kthread_create_on_node" },
	{ 0xaa9f4d7f, "bt_sock_wait_state" },
	{ 0x7d11c268, "jiffies" },
	{ 0xaa5af05c, "tty_set_operations" },
	{ 0x4b599289, "bt_printk" },
	{ 0x77b303ee, "__pskb_pull_tail" },
	{ 0xa58f3a59, "__init_waitqueue_head" },
	{ 0xe0512149, "sock_no_mmap" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x64250718, "bt_accept_enqueue" },
	{ 0x80823f51, "bt_sock_unlink" },
	{ 0x18ec7e02, "bt_accept_unlink" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x1b59e5dd, "skb_queue_purge" },
	{ 0x4202a842, "hci_get_route" },
	{ 0x70308ac0, "bt_accept_dequeue" },
	{ 0x5277750c, "sock_no_socketpair" },
	{ 0x60d459f8, "kernel_connect" },
	{ 0xc3e0015f, "sk_alloc" },
	{ 0x92f9be69, "kthread_stop" },
	{ 0xdcaa92a, "lock_sock_nested" },
	{ 0x4141f80, "__tracepoint_module_get" },
	{ 0x71c90087, "memcmp" },
	{ 0xd702e480, "_raw_read_unlock" },
	{ 0x7d0fa3e1, "hci_conn_security" },
	{ 0x3ecca81f, "debugfs_remove" },
	{ 0x32e32333, "tty_insert_flip_string_fixed_flag" },
	{ 0xf5cfb57c, "skb_push" },
	{ 0xc290adac, "mutex_lock" },
	{ 0x87b89a1c, "device_move" },
	{ 0xfe58de59, "sk_free" },
	{ 0x1fc6d3c2, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf19294db, "bt_sock_unregister" },
	{ 0xcbd73dbd, "tty_vhangup" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x7d5b4d1b, "skb_pull" },
	{ 0x7a7b10c6, "init_net" },
	{ 0x5dde5545, "tty_register_device" },
	{ 0x9707bc6b, "bt_sock_link" },
	{ 0x19e32000, "device_create_file" },
	{ 0x9fe97e9e, "module_put" },
	{ 0x36873e17, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4d4ce7a7, "proto_register" },
	{ 0xfd13b6b4, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xd5d2ea02, "bt_debugfs" },
	{ 0xc2066af0, "batostr" },
	{ 0x92192b17, "__alloc_skb" },
	{ 0x353f9f16, "bt_sock_stream_recvmsg" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xb816d30e, "kfree_skb" },
	{ 0xc72da819, "proto_unregister" },
	{ 0xf488b477, "hci_unregister_cb" },
	{ 0xd59ce39a, "sock_alloc_send_skb" },
	{ 0xc27487dd, "__bug" },
	{ 0xb2c930e0, "wake_up_process" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0x9c0bd51f, "_raw_spin_lock" },
	{ 0xe4aaae26, "system_nrt_wq" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x6b9646af, "tty_unregister_driver" },
	{ 0x30b1f80d, "tty_hangup" },
	{ 0x4e730d10, "kernel_accept" },
	{ 0xd85cd67e, "__wake_up" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x8bd0a3fd, "_raw_write_unlock_bh" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xc7bcbc8d, "add_wait_queue" },
	{ 0x4fa959a3, "seq_lseek" },
	{ 0xe11f3cbc, "_raw_read_lock_bh" },
	{ 0x1fcf4d4b, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xc90b9059, "hci_conn_switch_role" },
	{ 0x9d669763, "memcpy" },
	{ 0x9fb3dd30, "memcpy_fromiovec" },
	{ 0xafc07856, "set_user_nice" },
	{ 0xa414882d, "add_wait_queue_exclusive" },
	{ 0x79b0708b, "kernel_bind" },
	{ 0x85061b76, "_raw_write_lock_bh" },
	{ 0x3d0eb6c2, "skb_dequeue" },
	{ 0x2abc71a0, "tty_flip_buffer_push" },
	{ 0x95dbe078, "__get_user_2" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7c17fda2, "tty_wakeup" },
	{ 0xcd462668, "skb_put" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0xb365dbea, "dev_get_drvdata" },
	{ 0xed302f0f, "tty_lock" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "F784BD099DC592115D00B7A");
