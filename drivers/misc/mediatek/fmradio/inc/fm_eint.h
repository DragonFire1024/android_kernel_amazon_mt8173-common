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

#ifndef __FM_EINT_H__
#define __FM_EINT_H__

#include "fm_typedef.h"

enum {
	FM_EINT_PIN_EINT_MODE,
	FM_EINT_PIN_GPIO_MODE,
	FM_EINT_PIN_MAX_MODE
};

extern fm_s32 fm_enable_eint(void);
extern fm_s32 fm_disable_eint(void);
extern fm_s32 fm_request_eint(void (*parser) (void));
extern fm_s32 fm_eint_pin_cfg(fm_s32 mode);

#endif /* __FM_EINT_H__ */