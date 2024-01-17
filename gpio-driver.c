#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

static int __init gpio_driver_init(void)
{
    printk("Hello from my driver!\n");
    return 0;
}

static void __exit gpio_driver_exit(void)
{
    printk("Exiting my driver!\n");
    return;
}

module_init(gpio_driver_init);
module_exit(gpio_driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Lucas Batista");
MODULE_DESCRIPTION("A simple driver for raspberry pi");
MODULE_VERSION("0.1");
