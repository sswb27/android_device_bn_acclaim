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
	{ 0xfee2def4, "usb_deregister" },
	{ 0xe70628fe, "usb_register_driver" },
	{ 0x92192b17, "__alloc_skb" },
	{ 0x87b716a9, "hci_recv_frame" },
	{ 0x9d669763, "memcpy" },
	{ 0xcd462668, "skb_put" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x78cf4589, "usb_kill_anchored_urbs" },
	{ 0x4f34d920, "usb_unanchor_urb" },
	{ 0x4b599289, "bt_printk" },
	{ 0xf3fee57c, "usb_submit_urb" },
	{ 0xb9456603, "usb_anchor_urb" },
	{ 0xb909f179, "usb_free_urb" },
	{ 0xf5cfb57c, "skb_push" },
	{ 0xe1582565, "usb_alloc_urb" },
	{ 0xb816d30e, "kfree_skb" },
	{ 0x96049d34, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b56e072, "hci_register_dev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xec35834d, "hci_alloc_dev" },
	{ 0xa58f3a59, "__init_waitqueue_head" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0x394d5ebf, "hci_free_dev" },
	{ 0x4d91e019, "hci_unregister_dev" },
	{ 0x5587941b, "dev_set_drvdata" },
	{ 0xb365dbea, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "4E025DDACF5A47084959544");
