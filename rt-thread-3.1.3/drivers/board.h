/*
* Copyright (c) 2006-2022, RT-Thread Development Team
*
* SPDX-License-Identifier: Apache-2.0
*
* Change Logs:
* Date           Author       Notes
* 2020-10-22     thread-liu   first version
*/

#ifndef __BOARD_H__
#define __BOARD_H__

#if defined(__CC_ARM)
extern int Image$$RW_IRAM1$$ZI$$Limit;
#define HEAP_BEGIN      ((void*)&Image$$RW_IRAM1$$ZI$$Limit)
#elif defined(__GNUC__)
extern int __bss_end;
#define HEAP_BEGIN      ((void*)&__bss_end)
#endif

#define HEAP_END        (void*)(0x60000000 + 8 * 1024 * 1024)

void rt_hw_board_init(void);

#endif
