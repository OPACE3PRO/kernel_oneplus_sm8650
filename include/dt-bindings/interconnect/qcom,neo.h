/* SPDX-License-Identifier: GPL-2.0-only OR BSD-2-Clause */
/*
 * Copyright (c) 2021, The Linux Foundation. All rights reserved.
 * Copyright (c) 2022, 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 *
 */

#ifndef __DT_BINDINGS_INTERCONNECT_QCOM_NEO_H
#define __DT_BINDINGS_INTERCONNECT_QCOM_NEO_H

#define MASTER_GPU_TCU				0
#define MASTER_SYS_TCU				1
#define MASTER_APPSS_PROC				2
#define MASTER_LLCC				3
#define MASTER_CNOC_LPASS_AG_NOC				4
#define MASTER_GIC_AHB				5
#define MASTER_CDSP_NOC_CFG				6
#define MASTER_QDSS_BAM				7
#define MASTER_QSPI_0				8
#define MASTER_QUP_0				9
#define MASTER_QUP_1				10
#define MASTER_A2NOC_SNOC				11
#define MASTER_CAMNOC_HF				12
#define MASTER_CAMNOC_ICP				13
#define MASTER_CAMNOC_SF				14
#define MASTER_CNOC_DATAPATH				15
#define MASTER_GEM_NOC_CNOC				16
#define MASTER_GEM_NOC_PCIE_SNOC				17
#define MASTER_GFX3D				18
#define MASTER_LPASS_ANOC				19
#define MASTER_LSR				20
#define MASTER_MDP				21
#define MASTER_CNOC_MNOC_CFG				22
#define MASTER_MNOC_HF_MEM_NOC				23
#define MASTER_MNOC_SF_MEM_NOC				24
#define MASTER_COMPUTE_NOC				25
#define MASTER_ANOC_PCIE_GEM_NOC				26
#define MASTER_SNOC_CFG				27
#define MASTER_SNOC_GC_MEM_NOC				28
#define MASTER_SNOC_SF_MEM_NOC				29
#define MASTER_VIDEO				30
#define MASTER_VIDEO_CV_PROC				31
#define MASTER_VIDEO_PROC				32
#define MASTER_VIDEO_V_PROC				33
#define MASTER_QUP_CORE_0				34
#define MASTER_QUP_CORE_1				35
#define MASTER_CRYPTO				36
#define MASTER_LPASS_PROC				37
#define MASTER_CDSP_PROC				38
#define MASTER_PIMEM				39
#define MASTER_WLAN_Q6				40
#define MASTER_GIC				41
#define MASTER_PCIE_0				42
#define MASTER_PCIE_1				43
#define MASTER_QDSS_DAP				44
#define MASTER_QDSS_ETR				45
#define MASTER_QDSS_ETR_1				46
#define MASTER_SDCC_1				47
#define MASTER_USB3_0				48
#define SLAVE_EBI1				512
#define SLAVE_AHB2PHY_SOUTH				513
#define SLAVE_AOSS				514
#define SLAVE_CAMERA_CFG				515
#define SLAVE_CLK_CTL				516
#define SLAVE_CDSP_CFG				517
#define SLAVE_RBCPR_CX_CFG				518
#define SLAVE_RBCPR_MMCX_CFG				519
#define SLAVE_RBCPR_MXA_CFG				520
#define SLAVE_RBCPR_MXC_CFG				521
#define SLAVE_CPR_NSPCX				522
#define SLAVE_CRYPTO_0_CFG				523
#define SLAVE_CX_RDPM				524
#define SLAVE_DISPLAY_CFG				525
#define SLAVE_GFX3D_CFG				526
#define SLAVE_IMEM_CFG				527
#define SLAVE_IPC_ROUTER_CFG				528
#define SLAVE_LPASS				529
#define SLAVE_LPASS_CORE_CFG				530
#define SLAVE_LPASS_LPI_CFG				531
#define SLAVE_LPASS_MPU_CFG				532
#define SLAVE_LPASS_TOP_CFG				533
#define SLAVE_MX_RDPM				534
#define SLAVE_PCIE_0_CFG				535
#define SLAVE_PCIE_1_CFG				536
#define SLAVE_PDM				537
#define SLAVE_PIMEM_CFG				538
#define SLAVE_PRNG				539
#define SLAVE_QDSS_CFG				540
#define SLAVE_QSPI_0				541
#define SLAVE_QUP_0				542
#define SLAVE_QUP_1				543
#define SLAVE_SDCC_1				544
#define SLAVE_TCSR				545
#define SLAVE_TLMM				546
#define SLAVE_TME_CFG				547
#define SLAVE_USB3_0				548
#define SLAVE_VENUS_CFG				549
#define SLAVE_VSENSE_CTRL_CFG				550
#define SLAVE_WLAN_Q6_CFG				551
#define SLAVE_A2NOC_SNOC				552
#define SLAVE_DDRSS_CFG				553
#define SLAVE_GEM_NOC_CNOC				554
#define SLAVE_SNOC_GEM_NOC_GC				555
#define SLAVE_SNOC_GEM_NOC_SF				556
#define SLAVE_LLCC				557
#define SLAVE_MNOC_HF_MEM_NOC				558
#define SLAVE_MNOC_SF_MEM_NOC				559
#define SLAVE_CNOC_MNOC_CFG				560
#define SLAVE_CDSP_MEM_NOC				561
#define SLAVE_MEM_NOC_PCIE_SNOC				562
#define SLAVE_ANOC_PCIE_GEM_NOC				563
#define SLAVE_SNOC_CFG				564
#define SLAVE_LPASS_SNOC				565
#define SLAVE_QUP_CORE_0				566
#define SLAVE_QUP_CORE_1				567
#define SLAVE_IMEM				568
#define SLAVE_PIMEM				569
#define SLAVE_SERVICE_NSP_NOC				570
#define SLAVE_SERVICE_CNOC				571
#define SLAVE_SERVICE_MNOC				572
#define SLAVE_SERVICES_LPASS_AML_NOC				573
#define SLAVE_SERVICE_LPASS_AG_NOC				574
#define SLAVE_SERVICE_SNOC				575
#define SLAVE_PCIE_0				576
#define SLAVE_PCIE_1				577
#define SLAVE_QDSS_STM				578
#define SLAVE_TCU				579
#define MASTER_LLCC_DISP				1000
#define MASTER_MDP_DISP				1001
#define MASTER_MNOC_HF_MEM_NOC_DISP				1002
#define MASTER_ANOC_PCIE_GEM_NOC_DISP				1003
#define SLAVE_EBI1_DISP				1512
#define SLAVE_LLCC_DISP				1513
#define SLAVE_MNOC_HF_MEM_NOC_DISP				1514

#endif
