/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2018-2020 Oplus. All rights reserved.
 */

#ifndef _TOUCHPANEL_TOOL_GTX8_H_
#define _TOUCHPANEL_TOOL_GTX8_H_

#include "../touchpanel_common.h"
#include "goodix_common.h"
#include <linux/miscdevice.h>


/****************************Start of modify declare****************************/
#define NO_ERR                  0
#define EMEMCMP                 1003
#define EBUS                    1000
#define ETIMEOUT                1001
#define ECHKSUM                 1002

/****************************End of modify declare****************************/


struct gtx8_tool_info {
	u8     devicecount;
	bool   esd_handle_support;            /*esd handle support feature*/
	bool   is_fpga_support;               /*fpga support feature*/
	int    *is_suspended;
	void   *chip_data;
	int irq;
	struct hw_resource *hw_res;
	struct i2c_client  *client;
	struct spi_device *spi;
	struct fw_update_info *update_info;
	struct esd_information  *esd_info;

	int (*reset)(void *chip_data);   /*Reset Touchpanel*/
	struct cdev main_dev;
	dev_t dev_no;
	struct class *class;
	struct device *device;
	int rmidev_major_num;
	int tp_index;
	int *p_gt8x_rawdiff_mode;
};

int gtx8_init_tool_node(struct touchpanel_data *ts, int *p);
void gtx8_deinit_tool_node(struct touchpanel_data *ts);

#define GTP_ESD_PROTECT 0
#define GTP_DRIVER_VERSION          "V1.4<2015/07/10>"

#define DATA_LENGTH_UINT    512
#define GTP_ADDR_LENGTH     2
#define DATA_LENGTH         (DATA_LENGTH_UINT - GTP_ADDR_LENGTH)

#endif /*_TOUCHPANEL_TOOL_GTX8_H_*/
