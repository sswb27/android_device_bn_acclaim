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
	{ 0x96049d34, "kmalloc_caches" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xaf1f71f0, "release_firmware" },
	{ 0x9ed2bfb6, "request_firmware" },
	{ 0x9216061a, "btmrvl_enable_ps" },
	{ 0xda480a2e, "btmrvl_register_hdev" },
	{ 0x659f5492, "btmrvl_add_card" },
	{ 0x4ca63651, "sdio_set_block_size" },
	{ 0x39068c4b, "sdio_claim_irq" },
	{ 0x2b8cbdb3, "sdio_enable_func" },
	{ 0xd0e23db4, "kmem_cache_alloc_trace" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfc113fe3, "btmrvl_send_module_cfg_cmd" },
	{ 0x86d94e63, "btmrvl_remove_card" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x87b716a9, "hci_recv_frame" },
	{ 0xe5e5495e, "btmrvl_check_evtpkt" },
	{ 0x864a490c, "btmrvl_process_event" },
	{ 0x7d5b4d1b, "skb_pull" },
	{ 0xcd462668, "skb_put" },
	{ 0xb816d30e, "kfree_skb" },
	{ 0x340833d, "sdio_readsb" },
	{ 0x92192b17, "__alloc_skb" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x37a0cba, "kfree" },
	{ 0xc946cc40, "sdio_writesb" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x4b599289, "bt_printk" },
	{ 0x930948c, "btmrvl_interrupt" },
	{ 0x51d559d1, "_raw_spin_unlock_irqrestore" },
	{ 0x598542b2, "_raw_spin_lock_irqsave" },
	{ 0xe9fa879e, "sdio_writeb" },
	{ 0xb365dbea, "dev_get_drvdata" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12e1cc5e, "sdio_readb" },
	{ 0x5587941b, "dev_set_drvdata" },
	{ 0x952a9efc, "sdio_release_host" },
	{ 0x3dd175ab, "sdio_disable_func" },
	{ 0x79f034ff, "sdio_release_irq" },
	{ 0xc6a5b706, "sdio_claim_host" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd912A*");

MODULE_INFO(srcversion, "590092553087C5C680710A1");
