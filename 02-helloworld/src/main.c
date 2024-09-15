/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/*
    Author: Efraim Manurung
    Date: 15th September 2024

    Source: 
        https://github.com/golioth/zephyr-training/tree/main
        https://training.golioth.io/docs/zephyr-training/helloworld/compile-hello-world
        https://github.com/zephyrproject-rtos/zephyr/blob/v2.7.6/samples/hello_world/src/main.c

*/


#include <zephyr.h>
#include <sys/printk.h>

int main(void)
{
	printk("Hello World! %s\n", CONFIG_BOARD);
    printk("Efraim Efraim Manurung!\n");
}