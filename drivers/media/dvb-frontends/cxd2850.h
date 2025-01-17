/*
	Sony CXD2850 Multistandard Broadcast Frontend driver

	Copyright (C) Manu Abraham <abraham.manu@gmail.com>

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __CXD2850_H
#define __CXD2850_H

#include <linux/dvb/frontend.h>

struct cxd2850_config {
	u32	xtal;
	u8	dmd_addr;
	u8	tnr_addr;

	bool	shared_xtal;

	bool	serial_ts;
	bool	serial_d0;
	bool	tsclk_pol;
	bool	tone_out;
};

#if IS_REACHABLE(CONFIG_DVB_CXD2850)

extern struct dvb_frontend *cxd2850_attach(const struct cxd2850_config *config,
					   struct i2c_adapter *i2c);
#else

static inline struct dvb_frontend *cxd2850_attach(const struct cxd2850_config *config,
						  struct i2c_adapter *i2c)
{
	printk(KERN_WARNING "%s: driver disabled by Kconfig\n", __func__);
	return NULL;
}
#endif /* CONFIG_DVB_CXD2850 */

#endif /* __CXD2850_H */
