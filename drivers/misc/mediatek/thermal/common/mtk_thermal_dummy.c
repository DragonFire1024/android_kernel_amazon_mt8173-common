/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#include <asm/uaccess.h>
/* #include <asm/system.h> */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/err.h>
#include <mtk_thermal_typedefs.h>

/* ************************************ */
/* Definition */
/* ************************************ */

unsigned long (*mtk_thermal_get_gpu_loading_fp)(void) = NULL;
/*EXPORT_SYMBOL(mtk_thermal_get_gpu_loading_fp);
Should open, but I turn it off for coding style
*/

/* Init */
static int __init mtk_thermal_platform_init(void)
{
	int err = 0;
	return err;
}

/* Exit */
static void __exit mtk_thermal_platform_exit(void)
{

}

module_init(mtk_thermal_platform_init);
module_exit(mtk_thermal_platform_exit);
