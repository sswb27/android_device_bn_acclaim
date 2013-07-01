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
	{ 0x3968206, "sock_init_data" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x3970cc70, "up_read" },
	{ 0x980bc16c, "kernel_sendmsg" },
	{ 0x927f02e6, "sockfd_lookup" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x352e6ed4, "sock_no_setsockopt" },
	{ 0x81c7e243, "sock_no_getsockopt" },
	{ 0x4c86184b, "remove_wait_queue" },
	{ 0x53880cb7, "eth_change_mtu" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8e6d9e7c, "sock_no_getname" },
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0x24fb075e, "bt_sock_register" },
	{ 0x980b3241, "kthread_create_on_node" },
	{ 0x58ed2636, "sock_no_poll" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4b599289, "bt_printk" },
	{ 0x45e21466, "down_read" },
	{ 0x77b303ee, "__pskb_pull_tail" },
	{ 0xe0512149, "sock_no_mmap" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x9d1ae78f, "sock_no_recvmsg" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x4202a842, "hci_get_route" },
	{ 0x5f754e5a, "memset" },
	{ 0xcc314871, "netif_rx_ni" },
	{ 0x5277750c, "sock_no_socketpair" },
	{ 0xc3e0015f, "sk_alloc" },
	{ 0x27e1a049, "printk" },
	{ 0x6a316851, "sock_no_bind" },
	{ 0x4141f80, "__tracepoint_module_get" },
	{ 0x71c90087, "memcmp" },
	{ 0xcc1fb551, "baswap" },
	{ 0xc989a33d, "free_netdev" },
	{ 0x4958498e, "register_netdev" },
	{ 0x484f4665, "sock_no_listen" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc465fc79, "sock_no_accept" },
	{ 0xfe58de59, "sk_free" },
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
	{ 0x1000e51, "schedule" },
	{ 0xb816d30e, "kfree_skb" },
	{ 0xc72da819, "proto_unregister" },
	{ 0xc6aa9125, "alloc_netdev_mqs" },
	{ 0x27ae66aa, "eth_type_trans" },
	{ 0xc27487dd, "__bug" },
	{ 0x2a2123e8, "__module_put_and_exit" },
	{ 0xb2c930e0, "wake_up_process" },
	{ 0xe471b5d, "ether_setup" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xd85cd67e, "__wake_up" },
	{ 0xbbb54000, "sock_no_connect" },
	{ 0x8bd0a3fd, "_raw_write_unlock_bh" },
	{ 0xa21b0e9b, "eth_validate_addr" },
	{ 0xc7bcbc8d, "add_wait_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0xb7b61546, "crc32_be" },
	{ 0x59d7138b, "sock_no_sendmsg" },
	{ 0xafc07856, "set_user_nice" },
	{ 0x85061b76, "_raw_write_lock_bh" },
	{ 0x3d0eb6c2, "skb_dequeue" },
	{ 0x709d63d3, "unregister_netdev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x73d9e179, "__netif_schedule" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "8017EFE778F0F6D7DC7A557");
