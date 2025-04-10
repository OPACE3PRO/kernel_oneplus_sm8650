################################################################
# COMMON
################################################################
UFF_FP_DRIVER_INJECT_ENABLE := no
ifeq ($(TARGET_BUILD_VARIANT),userdebug)
UFF_FP_DRIVER_INJECT_ENABLE := yes
endif

ifeq ($(OPLUS_FEATURE_BSP_DRV_VND_INJECT_TEST),1)
UFF_FP_DRIVER_INJECT_ENABLE := yes
endif

# inject
ifeq ($(UFF_FP_DRIVER_INJECT_ENABLE),yes)
ccflags-y += -DCONFIG_FP_INJECT_ENABLE
endif

# gki
ccflags-$(CONFIG_OPLUS_FINGERPRINT_GKI_ENABLE) += -DCONFIG_OPLUS_FINGERPRINT_GKI_ENABLE

################################################################
# QCOM
################################################################
ifeq ($(CONFIG_UFF_FINGERPRINT_QCOM),y)
ccflags-y += -DQCOM_PLATFORM

ifeq ($(CONFIG_OPLUS_FINGERPRINT_GKI_ENABLE),y)
#tp for gki
ccflags-y += -I$(srctree)/../../vendor/oplus/kernel/touchpanel/oplus_touchscreen_v2/touchpanel_notify
endif

obj-$(CONFIG_UFF_FINGERPRINT) += oplus_bsp_uff_fp_driver.o
oplus_bsp_uff_fp_driver-y := fp_driver.o fp_platform.o fingerprint_event.o fp_health.o fp_netlink.o
ifeq ($(UFF_FP_DRIVER_INJECT_ENABLE),yes)
oplus_bsp_uff_fp_driver-y += fp_fault_inject.o
endif
endif

################################################################
# MTK
################################################################
ifeq ($(CONFIG_UFF_FINGERPRINT_MTK),y)
ccflags-y += -DMTK_PLATFORM
subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/include
subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(MTK_PLATFORM)/include
subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/include/mt-plat
subdir-ccflags-y += -I$(srctree)/drivers/spi/mediatek/$(MTK_PLATFORM)
subdir-ccflags-y += -I$(srctree)/drivers/spi/trustzone/spi/Tlspi/inc

ifneq ($(filter kernel-4.19, $(LINUX_KERNEL_VERSION)),)
include $(srctree)/drivers/tee/gud/Makefile.include
else ifneq ($(filter kernel-4.14 kernel-4.9, $(LINUX_KERNEL_VERSION)),)
include $(srctree)/drivers/misc/mediatek/gud/Makefile.include
endif

#lcd uiready for gki
ccflags-$(CONFIG_DRM_MEDIATEK_V2) += -I$(srctree)/drivers/gpu/drm/mediatek/mediatek_v2/
ccflags-$(CONFIG_DRM_MEDIATEK_V2) += -DCONFIG_DRM_MEDIATEK_V2

# wl2868c supply for gki
ccflags-$(CONFIG_FP_SUPPLY_MODE_LDO) += -I$(srctree)/drivers/misc/mediatek/wl2868c
ccflags-$(CONFIG_FP_SUPPLY_MODE_LDO) += -DCONFIG_FP_SUPPLY_MODE_LDO

# DIO8018 power supply
ccflags-$(CONFIG_FP_SUPPLY_MODE_LDO_DIO8018) += -I$(srctree)/drivers/misc/mediatek/pmic/pmic_ldo_set
ccflags-$(CONFIG_FP_SUPPLY_MODE_LDO_DIO8018) += -DCONFIG_FP_SUPPLY_MODE_LDO_DIO8018

ifeq ($(CONFIG_OPLUS_FINGERPRINT_GKI_ENABLE),y)
#tp for gki
ccflags-y += -I$(srctree)/../vendor/oplus/kernel/touchpanel/oplus_touchscreen_v2/touchpanel_notify
endif

obj-$(CONFIG_UFF_FINGERPRINT) += uff_fp_driver.o
uff_fp_driver-y := fp_driver.o fp_platform.o fingerprint_event.o fp_health.o fp_netlink.o
ifeq ($(UFF_FP_DRIVER_INJECT_ENABLE),yes)
uff_fp_driver-y += fp_fault_inject.o
endif
endif

################################################################
# REE
################################################################
obj-$(CONFIG_UFF_FINGERPRINT_REE_SPI) += ree_spi/
