/* Copyright (c) 2012, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef DIAGFWD_HSIC_H
#define DIAGFWD_HSIC_H

#include <mach/diag_bridge.h>
#define N_MDM_WRITE	1 /* Upgrade to 2 with ping pong buffer */
#define N_MDM_READ	1

void __init diagfwd_hsic_init(void);
void __exit diagfwd_hsic_exit(void);

#endif
