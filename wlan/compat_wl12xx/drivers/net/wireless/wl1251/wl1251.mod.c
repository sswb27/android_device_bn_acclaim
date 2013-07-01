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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x22ef6439, "generic_file_llseek" },
	{ 0x6205c1ca, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xc95e94a7, "ieee80211_queue_work" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x4bdf09d6, "ieee80211_cqm_rssi_notify" },
	{ 0xb54533f7, "usecs_to_jiffies" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x96d21186, "ieee80211_beacon_get_tim" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x5f9bd827, "ieee80211_unregister_hw" },
	{ 0x7513e94e, "ieee80211_channel_to_frequency" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd68120bb, "init_timer_key" },
	{ 0xa6b09f27, "mutex_unlock" },
	{ 0x6df7f5db, "ieee80211_scan_completed" },
	{ 0x999e8297, "vfree" },
	{ 0x41237fb6, "debugfs_create_file" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf1bd2329, "ieee80211_stop_queues" },
	{ 0xb948373f, "ieee80211_tx_status" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x59a1b9e8, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x51d559d1, "_raw_spin_unlock_irqrestore" },
	{ 0xe2e93e61, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xbccc505, "ieee80211_wake_queues" },
	{ 0x328a05f1, "strncpy" },
	{ 0x3ecca81f, "debugfs_remove" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8307ae92, "ieee80211_rx" },
	{ 0xf5cfb57c, "skb_push" },
	{ 0xc290adac, "mutex_lock" },
	{ 0x7d5b4d1b, "skb_pull" },
	{ 0x90b10b1d, "ieee80211_queue_delayed_work" },
	{ 0x68583898, "dev_kfree_skb_any" },
	{ 0x36873e17, "skb_queue_tail" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x926aaff2, "skb_copy_expand" },
	{ 0x92192b17, "__alloc_skb" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0x598542b2, "_raw_spin_lock_irqsave" },
	{ 0x7d2423e7, "ieee80211_get_hdrlen_from_skb" },
	{ 0x33557ad, "ieee80211_register_hw" },
	{ 0x2a0edcfc, "ieee80211_pspoll_get" },
	{ 0x523a35d5, "ieee80211_nullfunc_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x506867e2, "ieee80211_beacon_loss" },
	{ 0x9d669763, "memcpy" },
	{ 0xf7cd3984, "ieee80211_alloc_hw" },
	{ 0x374ed073, "scnprintf" },
	{ 0x9ed2bfb6, "request_firmware" },
	{ 0xa2d1c003, "ieee80211_probereq_get" },
	{ 0x5cf13db2, "ieee80211_free_hw" },
	{ 0x3d0eb6c2, "skb_dequeue" },
	{ 0x99bb8806, "memmove" },
	{ 0xc229ce9c, "consume_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xcd462668, "skb_put" },
	{ 0xaf1f71f0, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


MODULE_INFO(srcversion, "6AA5C66F60EFAE32E5E3663");
