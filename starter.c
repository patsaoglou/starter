#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>  

MODULE_AUTHOR("Patsaoglou Pantelis");
MODULE_DESCRIPTION("My starter module for kernel dev");
MODULE_LICENSE("Dual MIT/GPL");

static int __init starter_init(void)
{
	printk(KERN_INFO "%s: Starter module init\n", KBUILD_MODNAME);
	
	return 0;
}

static void __exit starter_exit(void)
{
       	printk(KERN_INFO "%s: Starter module exit\n", KBUILD_MODNAME);

}

module_init(starter_init);
module_exit(starter_exit);
