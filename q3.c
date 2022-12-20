#include <linux/module.h>  
#include <linux/kernel.h>  
#include <linux/sched.h>   

static int __init process_info_init(void)
{
    struct task_struct *task = current;

    printk(KERN_INFO "Process ID: %d\n", task->pid);

    printk(KERN_INFO "Command: %s\n", task->comm);

    printk(KERN_INFO "State: %ld\n", task->state);

    return 0;
}


static void __exit process_info_exit(void)
{
    
}


module_init(process_info_init);
module_exit(process_info_exit);


MODULE_AUTHOR("Your Name");
MODULE_LICENSE("GPL");
