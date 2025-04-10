# SPDX-License-Identifier: GPL-2.0
#
# Makefile for misc devices that really don't fit anywhere else.
#

obj-$(CONFIG_IBM_ASM)		+= ibmasm/
obj-$(CONFIG_IBMVMC)		+= ibmvmc.o
obj-$(CONFIG_AD525X_DPOT)	+= ad525x_dpot.o
obj-$(CONFIG_AD525X_DPOT_I2C)	+= ad525x_dpot-i2c.o
obj-$(CONFIG_AD525X_DPOT_SPI)	+= ad525x_dpot-spi.o
obj-$(CONFIG_ATMEL_SSC)		+= atmel-ssc.o
obj-$(CONFIG_DUMMY_IRQ)		+= dummy-irq.o
obj-$(CONFIG_ICS932S401)	+= ics932s401.o
obj-$(CONFIG_LKDTM)		+= lkdtm/
obj-$(CONFIG_TIFM_CORE)       	+= tifm_core.o
obj-$(CONFIG_TIFM_7XX1)       	+= tifm_7xx1.o
obj-$(CONFIG_PHANTOM)		+= phantom.o
obj-$(CONFIG_QCOM_COINCELL)	+= qcom-coincell.o
obj-$(CONFIG_QCOM_FASTRPC)	+= fastrpc.o
obj-$(CONFIG_SENSORS_BH1770)	+= bh1770glc.o
obj-$(CONFIG_SENSORS_APDS990X)	+= apds990x.o
obj-$(CONFIG_ENCLOSURE_SERVICES) += enclosure.o
obj-$(CONFIG_KGDB_TESTS)	+= kgdbts.o
obj-$(CONFIG_SGI_XP)		+= sgi-xp/
obj-$(CONFIG_SGI_GRU)		+= sgi-gru/
obj-$(CONFIG_CS5535_MFGPT)	+= cs5535-mfgpt.o
obj-$(CONFIG_GEHC_ACHC)		+= gehc-achc.o
obj-$(CONFIG_HP_ILO)		+= hpilo.o
obj-$(CONFIG_APDS9802ALS)	+= apds9802als.o
obj-$(CONFIG_ISL29003)		+= isl29003.o
obj-$(CONFIG_ISL29020)		+= isl29020.o
obj-$(CONFIG_SENSORS_TSL2550)	+= tsl2550.o
obj-$(CONFIG_DS1682)		+= ds1682.o
obj-$(CONFIG_C2PORT)		+= c2port/
obj-$(CONFIG_HMC6352)		+= hmc6352.o
obj-y				+= eeprom/
obj-y				+= cb710/
obj-$(CONFIG_VMWARE_BALLOON)	+= vmw_balloon.o
obj-$(CONFIG_PCH_PHUB)		+= pch_phub.o
obj-y				+= ti-st/
obj-y				+= lis3lv02d/
obj-$(CONFIG_ALTERA_STAPL)	+=altera-stapl/
obj-$(CONFIG_INTEL_MEI)		+= mei/
obj-$(CONFIG_VMWARE_VMCI)	+= vmw_vmci/
obj-$(CONFIG_LATTICE_ECP3_CONFIG)	+= lattice-ecp3-config.o
obj-$(CONFIG_SRAM)		+= sram.o
obj-$(CONFIG_SRAM_EXEC)		+= sram-exec.o
obj-$(CONFIG_GENWQE)		+= genwqe/
obj-$(CONFIG_ECHO)		+= echo/
obj-$(CONFIG_CXL_BASE)		+= cxl/
obj-$(CONFIG_DW_XDATA_PCIE)	+= dw-xdata-pcie.o
obj-$(CONFIG_PCI_ENDPOINT_TEST)	+= pci_endpoint_test.o
obj-$(CONFIG_OCXL)		+= ocxl/
obj-$(CONFIG_BCM_VK)		+= bcm-vk/
obj-y				+= cardreader/
obj-$(CONFIG_PVPANIC)   	+= pvpanic/
obj-$(CONFIG_HABANA_AI)		+= habanalabs/
obj-$(CONFIG_UACCE)		+= uacce/
obj-$(CONFIG_XILINX_SDFEC)	+= xilinx_sdfec.o
obj-$(CONFIG_HISI_HIKEY_USB)	+= hisi_hikey_usb.o
obj-$(CONFIG_HI6421V600_IRQ)	+= hi6421v600-irq.o
obj-$(CONFIG_OPEN_DICE)		+= open-dice.o
obj-$(CONFIG_GP_PCI1XXXX)	+= mchp_pci1xxxx/
obj-$(CONFIG_VCPU_STALL_DETECTOR)	+= vcpu_stall_detector.o
obj-$(CONFIG_UID_SYS_STATS)	+= uid_sys_stats.o
obj-$(CONFIG_QSEECOM_PROXY) 	+= qseecom_proxy.o
obj-$(CONFIG_BOOTMARKER_PROXY) 	+= bootmarker_proxy.o
obj-$(CONFIG_KINECTICS_XR_NORDIC) += kxrctrl/

obj-y	+= tri_state_key/

#ifdef OPLUS_FEATURE_RF_CABLE_DETECT
oplus_network_rf_cable_monitor-y           := oplus_rf_cable_monitor.o
obj-$(CONFIG_OPLUS_RF_CABLE_MONITOR)   += oplus_network_rf_cable_monitor.o
#endif /* OPLUS_FEATURE_RF_CABLE_DETECT */

#ifdef OPLUS_FEATURE_SIM_DETECT
oplus_network_sim_detect-y := sim_detect.o
obj-$(CONFIG_SIM_DETECT)	+= oplus_network_sim_detect.o
#endif

#ifdef OPLUS_FEATURE_SIM_DETECT
oplus_network_oem_qmi-y := oem_qmi_client.o
obj-$(CONFIG_OEM_QMI)	+= oplus_network_oem_qmi.o
#endif

obj-$(CONFIG_OPLUS_GPIO) += oplus_network_esim.o

#ifdef OPLUS_FEATURE_CHG_BASIC
obj-$(CONFIG_AW8697_HAPTIC) += vibrator/aw8697_haptic/
obj-$(CONFIG_SIH_VIBRATOR) += vibrator/si_haptic/
#endif
obj-$(CONFIG_OPLUS_POWER_NOTIFIER) += oplus_power_notifier/

#ifdef CONFIG_OPLUS_SENSOR_CONSUMER_IR
obj-$(CONFIG_OPLUS_SENSOR_CONSUMER_IR_CORE) += oplus_consumer_ir/
#endif /* CONFIG_OPLUS_SENSOR_CONSUMER_IR */

#ifdef CONFIG_OPLUS_SYNC_FENCE
obj-$(CONFIG_OPLUS_SYNC_FENCE) += oplus_sync_fence/
#endif /* CONFIG_OPLUS_SYNC_FENCE */
