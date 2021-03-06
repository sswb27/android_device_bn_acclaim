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
	{ 0x15922202, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x92b57248, "flush_work" },
	{ 0xf0493b5b, "kmem_cache_destroy" },
	{ 0xe90dcae0, "__request_module" },
	{ 0x96049d34, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6988acf, "cfg80211_cqm_rssi_notify" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd5b037e1, "kref_put" },
	{ 0xab6babaf, "pm_qos_request" },
	{ 0xed09bdb0, "init_dummy_netdev" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xcd35a94e, "wiphy_free" },
	{ 0x8c319934, "cfg80211_unlink_bss" },
	{ 0x5fc56a46, "_raw_spin_unlock" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x920a2baa, "del_timer" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x13aa0fcf, "__alloc_workqueue_key" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2b1ada35, "dev_printk" },
	{ 0xa22599a3, "napi_complete" },
	{ 0x2c3bebcf, "cfg80211_inform_bss_frame" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb54533f7, "usecs_to_jiffies" },
	{ 0x36106c4a, "netif_carrier_on" },
	{ 0xa1d55e90, "_raw_spin_lock_bh" },
	{ 0x338158dc, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x3a4e62ed, "skb_copy" },
	{ 0x8949858b, "schedule_work" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x26b6eb67, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xd3d45f1f, "queue_work" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xc83213d9, "cfg80211_rx_mgmt" },
	{ 0x7513e94e, "ieee80211_channel_to_frequency" },
	{ 0xd68120bb, "init_timer_key" },
	{ 0x9621849f, "ring_buffer_event_data" },
	{ 0xa6b09f27, "mutex_unlock" },
	{ 0xc63f1b81, "ieee80211_radiotap_iterator_next" },
	{ 0xb8dbd1f3, "cfg80211_send_rx_assoc" },
	{ 0x411ef87c, "ieee80211_data_to_8023" },
	{ 0x61a856b2, "cfg80211_probe_status" },
	{ 0x607e605e, "cfg80211_del_sta" },
	{ 0x91451751, "filter_current_check_discard" },
	{ 0x1251d30f, "call_rcu" },
	{ 0x94ee51c4, "idr_for_each" },
	{ 0x39e15e5f, "trace_nowake_buffer_unlock_commit" },
	{ 0x7d11c268, "jiffies" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x5987175e, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x524cf9e, "cfg80211_mgmt_tx_status" },
	{ 0xccb280e, "netif_rx" },
	{ 0x77b303ee, "__pskb_pull_tail" },
	{ 0x865029ac, "__hw_addr_sync" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x72aa82c6, "param_ops_charp" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x59a1b9e8, "del_timer_sync" },
	{ 0x1b59e5dd, "skb_queue_purge" },
	{ 0x65775b1a, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0xcc314871, "netif_rx_ni" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x81ffe462, "__ieee80211_get_channel" },
	{ 0xdd58d537, "dev_alloc_skb" },
	{ 0xe3bcc80c, "idr_destroy" },
	{ 0xb86e4ab9, "random32" },
	{ 0xe3cd890f, "dev_err" },
	{ 0x51d559d1, "_raw_spin_unlock_irqrestore" },
	{ 0x6db9fa4c, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe2e93e61, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xa37563d5, "__cfg80211_auth_canceled" },
	{ 0xaf91d89f, "__kernel_param_lock" },
	{ 0x4141f80, "__tracepoint_module_get" },
	{ 0x71c90087, "memcmp" },
	{ 0x9cc6f6a0, "cfg80211_notify_new_peer_candidate" },
	{ 0x982e6b6d, "ieee80211_radiotap_iterator_init" },
	{ 0xe95000cc, "cfg80211_send_disassoc" },
	{ 0x96cbcf31, "pm_qos_add_notifier" },
	{ 0xc989a33d, "free_netdev" },
	{ 0x6e46201a, "wiphy_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x789234f5, "netif_receive_skb" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xa0ac5889, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xf5cfb57c, "skb_push" },
	{ 0xc290adac, "mutex_lock" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xa941818f, "destroy_workqueue" },
	{ 0xbe152f96, "cfg80211_send_rx_auth" },
	{ 0x6c115fe1, "dev_close" },
	{ 0x3e745b0, "cfg80211_cqm_pktloss_notify" },
	{ 0x16fad045, "cfg80211_michael_mic_failure" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x1fc6d3c2, "mod_timer" },
	{ 0xf412d2b7, "netif_napi_add" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4676bda0, "add_timer" },
	{ 0x8fece6f8, "cfg80211_report_obss_beacon" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x7d5b4d1b, "skb_pull" },
	{ 0xfef8a166, "trace_current_buffer_lock_reserve" },
	{ 0xeb0d508c, "__cfg80211_send_disassoc" },
	{ 0xb6bf0d88, "cfg80211_ibss_joined" },
	{ 0x76a7aadc, "cfg80211_rx_spurious_frame" },
	{ 0xa5d0203c, "flush_workqueue" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x68583898, "dev_kfree_skb_any" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x4f7e241b, "idr_remove" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x19ecc7ec, "ieee80211_bss_get_ie" },
	{ 0xb68393c2, "dev_kfree_skb_irq" },
	{ 0x4f9f3131, "idr_pre_get" },
	{ 0x1ecd3660, "ftrace_event_reg" },
	{ 0xa884cc2, "cfg80211_can_beacon_sec_chan" },
	{ 0x9fe97e9e, "module_put" },
	{ 0x36873e17, "skb_queue_tail" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x926aaff2, "skb_copy_expand" },
	{ 0x71791db9, "cfg80211_gtk_rekey_notify" },
	{ 0xfb5b0947, "_dev_info" },
	{ 0x7a27c184, "ewma_init" },
	{ 0x7a0ca4c8, "kmem_cache_alloc" },
	{ 0x28097ea2, "cfg80211_ch_switch_notify" },
	{ 0xd7779230, "cfg80211_put_bss" },
	{ 0x92192b17, "__alloc_skb" },
	{ 0x6447c70a, "wiphy_new" },
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0xdefe84f2, "wiphy_register" },
	{ 0x599e0ebb, "__napi_schedule" },
	{ 0xdd3916ac, "_raw_spin_unlock_bh" },
	{ 0x3a942bc8, "cfg80211_send_unprot_disassoc" },
	{ 0x88c9abc0, "cfg80211_classify8021d" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xb816d30e, "kfree_skb" },
	{ 0x26353e00, "cfg80211_ready_on_channel" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xc6aa9125, "alloc_netdev_mqs" },
	{ 0x27ae66aa, "eth_type_trans" },
	{ 0xdaabc580, "cfg80211_roaming_status" },
	{ 0xd905a923, "crypto_destroy_tfm" },
	{ 0xc27487dd, "__bug" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0xd11c0dc1, "__kernel_param_unlock" },
	{ 0x2ff15977, "pskb_expand_head" },
	{ 0xe471b5d, "ether_setup" },
	{ 0xc4bfe04, "omap_bus_post" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0x9c0bd51f, "_raw_spin_lock" },
	{ 0x232a4684, "cfg80211_send_unprot_deauth" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x598542b2, "_raw_spin_lock_irqsave" },
	{ 0x50b84df4, "cfg80211_send_intermediate_result" },
	{ 0xc0fd276, "kmem_cache_create" },
	{ 0xd06f1920, "unregister_netdevice_queue" },
	{ 0x89178674, "cfg80211_new_sta" },
	{ 0xefdd5a63, "ktime_get_ts" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8bd0a3fd, "_raw_write_unlock_bh" },
	{ 0x3d895b32, "__cfg80211_send_deauth" },
	{ 0x8d66a3a, "warn_slowpath_fmt" },
	{ 0xe11f3cbc, "_raw_read_lock_bh" },
	{ 0x1fcf4d4b, "_raw_read_unlock_bh" },
	{ 0x83800bfa, "kref_init" },
	{ 0x6d27ef64, "__bitmap_empty" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd94d10f1, "trace_event_raw_init" },
	{ 0xd39b64dd, "___pskb_trim" },
	{ 0x36b895c0, "dev_alloc_name" },
	{ 0xb7b61546, "crc32_be" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x9775cdc, "kref_get" },
	{ 0x3e9110fa, "__hw_addr_unsync" },
	{ 0x4b3c71dd, "cfg80211_send_deauth" },
	{ 0xbd4cc838, "ieee80211_amsdu_to_8023s" },
	{ 0x85061b76, "_raw_write_lock_bh" },
	{ 0x3d0eb6c2, "skb_dequeue" },
	{ 0x2dbc6d8b, "dev_warn" },
	{ 0xb673b8ec, "cfg80211_req_channel_switch" },
	{ 0xf6e04730, "event_storage" },
	{ 0x8bd08a3f, "cfg80211_remain_on_channel_expired" },
	{ 0xae0c87ee, "pm_qos_remove_notifier" },
	{ 0x761d0a71, "cfg80211_send_auth_timeout" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd4669fad, "complete" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x73d9e179, "__netif_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xaf51a717, "trace_seq_printf" },
	{ 0x99bb8806, "memmove" },
	{ 0xc229ce9c, "consume_skb" },
	{ 0xf691bb0a, "cfg80211_sched_scan_stopped" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x8cea4878, "cfg80211_scan_done" },
	{ 0x8b35be59, "idr_init" },
	{ 0x62cee438, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xcd462668, "skb_put" },
	{ 0xcec67d04, "eth_mac_addr" },
	{ 0x7cf9099, "wait_for_completion_timeout" },
	{ 0x3da7240f, "crypto_alloc_base" },
	{ 0xa170bbdb, "outer_cache" },
	{ 0xb2b2a763, "idr_find" },
	{ 0x94e8d80f, "skb_copy_bits" },
	{ 0x25165fe5, "event_storage_mutex" },
	{ 0x8ddfb42f, "queue_delayed_work" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9dcaabde, "cfg80211_rx_unexpected_4addr_frame" },
	{ 0xf389fe60, "__hw_addr_init" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd724dddd, "cfg80211_sched_scan_results" },
	{ 0xd23c9549, "cfg80211_send_assoc_timeout" },
	{ 0xa14f3d8c, "ewma_add" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";


MODULE_INFO(srcversion, "88ED9925356383308DC05E6");
