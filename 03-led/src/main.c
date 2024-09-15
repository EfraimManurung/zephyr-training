/*
    Author: Efraim Manurung
    Date:  15th September 2024

    Source:
        https://training.golioth.io/docs/zephyr-training/LED
        https://github.com/zephyrproject-rtos/zephyr/tree/v2.7.6/samples/boards/esp32/wifi_station
    
    Map an LED using Devicetree

    In this module we will use a Devicetree overlay file to map an LED. This is the perfect opportunity to
    dig into the secret to Zephyr's hardware abstraction. Along the way you will learn:
    - A general overview of what Devicetree does
    - Learn where to look in the Zephyr tree to find existing Devicetree definitions
    - Gain exposure to how Devicetree nodes work
    - Learn how to access Devicetree nodes from C code

    Devicetree overview 
    
*/  