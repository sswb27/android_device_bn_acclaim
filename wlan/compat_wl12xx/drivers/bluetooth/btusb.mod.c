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
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0xfee2def4, "usb_deregister" },
	{ 0xe70628fe, "usb_register_driver" },
	{ 0x79a367ef, "usb_set_interface" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb037149a, "usb_autopm_put_interface" },
	{ 0x2b2d87c5, "usb_autopm_get_interface" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x5fc56a46, "_raw_spin_unlock" },
	{ 0x9c0bd51f, "_raw_spin_lock" },
	{ 0xb816d30e, "kfree_skb" },
	{ 0x51d559d1, "_raw_spin_unlock_irqrestore" },
	{ 0x598542b2, "_raw_spin_lock_irqsave" },
	{ 0xb52da6eb, "usb_match_id" },
	{ 0x36873e17, "skb_queue_tail" },
	{ 0xcd462668, "skb_put" },
	{ 0x92192b17, "__alloc_skb" },
	{ 0x3b56e072, "hci_register_dev" },
	{ 0x42b9306, "usb_driver_claim_interface" },
	{ 0x2ba33ca6, "usb_ifnum_to_if" },
	{ 0xec35834d, "hci_alloc_dev" },
	{ 0xa58f3a59, "__init_waitqueue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x394d5ebf, "hci_free_dev" },
	{ 0xbe0450d8, "usb_driver_release_interface" },
	{ 0x4d91e019, "hci_unregister_dev" },
	{ 0x5587941b, "dev_set_drvdata" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x78cf4589, "usb_kill_anchored_urbs" },
	{ 0x1a1431fd, "_raw_spin_unlock_irq" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xdacd26c5, "usb_scuttle_anchored_urbs" },
	{ 0x8be3069d, "usb_get_from_anchor" },
	{ 0x3507a132, "_raw_spin_lock_irq" },
	{ 0xb365dbea, "dev_get_drvdata" },
	{ 0xb6d585b6, "hci_recv_fragment" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7d11c268, "jiffies" },
	{ 0x96049d34, "kmalloc_caches" },
	{ 0x4b599289, "bt_printk" },
	{ 0x4f34d920, "usb_unanchor_urb" },
	{ 0xb909f179, "usb_free_urb" },
	{ 0xf3fee57c, "usb_submit_urb" },
	{ 0xb9456603, "usb_anchor_urb" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0xe1582565, "usb_alloc_urb" },
	{ 0x8949858b, "schedule_work" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp21E1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "F361104084B3F8BECA40F1A");
