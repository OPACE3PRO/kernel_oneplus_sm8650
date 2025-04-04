
#ifndef __SY6974B_HEADER__
#define __SY6974B_HEADER__

/* Address:00h */
#define REG00_SY6974B_ADDRESS					0x00
#define REG00_SY6974B_SUSPEND_MODE_MASK				BIT(7)
#define REG00_SY6974B_SUSPEND_MODE_DISABLE			0x00
#define REG00_SY6974B_SUSPEND_MODE_ENABLE			BIT(7)

#define REG00_SY6974B_STAT_DIS_MASK				(BIT(6) | BIT(5))
#define REG00_SY6974B_STAT_DIS_ENABLE				0x00
#define REG00_SY6974B_STAT_DIS_DISABLE				(BIT(6) | BIT(5))

#define REG00_SY6974B_INPUT_CURRENT_LIMIT_MASK			(BIT(4) | BIT(3) | BIT(2) | BIT(1) | BIT(0))
#define REG00_SY6974B_INPUT_CURRENT_LIMIT_SHIFT			0
#define REG00_SY6974B_INPUT_CURRENT_LIMIT_OFFSET		100
#define REG00_SY6974B_INPUT_CURRENT_LIMIT_STEP		100
#define REG00_SY6974B_INPUT_CURRENT_LIMIT_MAX		3200
#define REG00_SY6974B_INPUT_CURRENT_LIMIT_100MA			0x00
#define REG00_SY6974B_INPUT_CURRENT_LIMIT_300MA			BIT(1)
#define REG00_SY6974B_INPUT_CURRENT_LIMIT_500MA			BIT(2)
#define REG00_SY6974B_INPUT_CURRENT_LIMIT_900MA			BIT(3)
#define REG00_SY6974B_INPUT_CURRENT_LIMIT_1200MA		(BIT(3) | BIT(1) | BIT(0))
#define REG00_SY6974B_INPUT_CURRENT_LIMIT_1500MA		(BIT(3) | BIT(2) | BIT(1))
#define REG00_SY6974B_INPUT_CURRENT_LIMIT_2000MA		(BIT(4) | BIT(1) | BIT(0))
#define REG00_SY6974B_INPUT_CURRENT_LIMIT_3000MA		(BIT(4) | BIT(3) | BIT(2) | BIT(0))

/* Address:01h */
#define REG01_SY6974B_ADDRESS					0x01

#define REG01_SY6974B_PFM_DIS_MASK				BIT(7)
#define REG01_SY6974B_PFM_DIS_ENABLE				0x00
#define REG01_SY6974B_PFM_DIS_DISABLE				BIT(7)

#define REG01_SY6974B_WDT_TIMER_RESET_MASK			BIT(6)
#define REG01_SY6974B_WDT_TIMER_NORMAL				0x00
#define REG01_SY6974B_WDT_TIMER_RESET				BIT(6)

#define REG01_SY6974B_OTG_MASK					BIT(5)
#define REG01_SY6974B_OTG_DISABLE				0x00
#define REG01_SY6974B_OTG_ENABLE				BIT(5)

#define REG01_SY6974B_CHARGING_MASK				BIT(4)
#define REG01_SY6974B_CHARGING_DISABLE				0x00
#define REG01_SY6974B_CHARGING_ENABLE				BIT(4)

#define REG01_SY6974B_SYS_VOL_LIMIT_MASK			(BIT(3) | BIT(2) | BIT(1))
#define REG01_SY6974B_SYS_VOL_LIMIT_2600MV			0x00
#define REG01_SY6974B_SYS_VOL_LIMIT_2800MV			BIT(1)
#define REG01_SY6974B_SYS_VOL_LIMIT_3000MV			BIT(2)
#define REG01_SY6974B_SYS_VOL_LIMIT_3200MV			(BIT(2) | BIT(1))
#define REG01_SY6974B_SYS_VOL_LIMIT_3400MV			BIT(3)
#define REG01_SY6974B_SYS_VOL_LIMIT_3500MV			(BIT(3) | BIT(1))
#define REG01_SY6974B_SYS_VOL_LIMIT_3600MV			(BIT(3) | BIT(2))
#define REG01_SY6974B_SYS_VOL_LIMIT_3700MV			(BIT(3) | BIT(2) | BIT(1))

#define REG01_SY6974B_VBAT_FALLING_MASK				BIT(0)
#define REG01_SY6974B_VBAT_FALLING_2800MV			0x00
#define REG01_SY6974B_VBAT_FALLING_2500MV			BIT(0)


/* Address:02h */
#define REG02_SY6974B_ADDRESS					0x02

#define REG02_SY6974B_OTG_CURRENT_LIMIT_MASK			BIT(7)
#define REG02_SY6974B_OTG_CURRENT_LIMIT_500MA			0x00
#define REG02_SY6974B_OTG_CURRENT_LIMIT_1200MA			BIT(7)
#define REG02_SY6974B_BOOSTI_1200 1200
#define REG02_SY6974B_BOOSTI_500  500
#define REG02_SY6974B_FAST_CHG_CURRENT_LIMIT_MASK		(BIT(5) | BIT(4) | BIT(3) | BIT(2) | BIT(1) | BIT(0))
#define REG02_SY6974B_FAST_CHG_CURRENT_LIMIT_SHIFT		0
#define REG02_SY6974B_FAST_CHG_CURRENT_LIMIT_OFFSET		0
#define REG02_SY6974B_FAST_CHG_CURRENT_LIMIT_STEP		60
#define REG02_SY6974B_FAST_CHG_CURRENT_LIMIT_MAX		3000


/* Address:03h */
#define REG03_SY6974B_ADDRESS					0x03

#define REG03_SY6974B_PRE_CHG_CURRENT_LIMIT_MASK		(BIT(7) | BIT(6) | BIT(5) | BIT(4))
#define REG03_SY6974B_PRE_CHG_CURRENT_LIMIT_SHIFT		4
#define REG03_SY6974B_PRE_CHG_CURRENT_LIMIT_OFFSET		60
#define REG03_SY6974B_PRE_CHG_CURRENT_LIMIT_STEP		60

#define REG03_SY6974B_TERM_CHG_CURRENT_LIMIT_MASK		(BIT(3) | BIT(2) | BIT(1) | BIT(0))
#define REG03_SY6974B_TERM_CHG_CURRENT_LIMIT_SHIFT		0
#define REG03_SY6974B_TERM_CHG_CURRENT_LIMIT_OFFSET		60
#define REG03_SY6974B_TERM_CHG_CURRENT_LIMIT_STEP		60


/* Address:04h */
#define REG04_SY6974B_ADDRESS					0x04

#define REG04_SY6974B_CHG_VOL_LIMIT_MASK			(BIT(7) | BIT(6) | BIT(5) | BIT(4) | BIT(3))
#define REG04_SY6974B_CHG_VOL_LIMIT_SHIFT			3
#define REG04_SY6974B_CHG_VOL_LIMIT_OFFSET			3856
#define REG04_BQ25601D_CHG_VOL_LIMIT_OFFSET			3847
#define REG04_SY6974B_CHG_VOL_LIMIT_MAX			4624
#define REG04_BQ25601D_CHG_VOL_LIMIT_MAX			4615
#define REG04_SY6974B_CHG_VOL_LIMIT_STEP			32

#define REG04_SY6974B_RECHG_THRESHOLD_VOL_MASK			BIT(0)
#define REG04_SY6974B_RECHG_THRESHOLD_VOL_100MV			0x00
#define REG04_SY6974B_RECHG_THRESHOLD_VOL_200MV			BIT(0)


/* Address:05h */
#define REG05_SY6974B_ADDRESS					0x05

#define REG05_SY6974B_TERMINATION_MASK				BIT(7)
#define REG05_SY6974B_TERMINATION_DISABLE			0x00
#define REG05_SY6974B_TERMINATION_ENABLE			BIT(7)

#define REG05_SY6974B_WATCHDOG_TIMER_MASK			(BIT(5) | BIT(4))
#define REG05_SY6974B_WATCHDOG_TIMER_DISABLE			0x00
#define REG05_SY6974B_WATCHDOG_TIMER_40S			BIT(4)
#define REG05_SY6974B_WATCHDOG_TIMER_80S			BIT(5)
#define REG05_SY6974B_WATCHDOG_TIMER_160S			(BIT(5) | BIT(4))

#define REG05_SY6974B_CHG_SAFETY_TIMER_MASK			BIT(3)
#define REG05_SY6974B_CHG_SAFETY_TIMER_DISABLE			0x00
#define REG05_SY6974B_CHG_SAFETY_TIMER_ENABLE			BIT(3)

#define REG05_SY6974B_FAST_CHG_TIMEOUT_MASK			BIT(2)
#define REG05_SY6974B_FAST_CHG_TIMEOUT_5H			0x00
#define REG05_SY6974B_FAST_CHG_TIMEOUT_10H			BIT(2)


/* Address:06h */
#define REG06_SY6974B_ADDRESS					0x06
#define REG06_SY6974B_OVP_MASK					(BIT(7) | BIT(6))
#define REG06_SY6974B_OVP_5P5V					0
#define REG06_SY6974B_OVP_6P5V					BIT(6)
#define REG06_SY6974B_OVP_10P5V					BIT(7)
#define REG06_SY6974B_OVP_14P0V					(BIT(7) | BIT(6))

#define REG06_SY6974B_OTG_VLIM_MASK				(BIT(5) | BIT(4))
#define REG06_SY6974B_OTG_VLIM_5150MV				BIT(5)
#define REG06_SY6974B_OTG_VLIM_5000MV				BIT(4)

#define REG06_SY6974B_VINDPM_MASK				(BIT(3) | BIT(2) | BIT(1) | BIT(0))
#define REG06_SY6974B_VINDPM_STEP_MV				100
#define REG06_SY6974B_VINDPM_OFFSET				3900
#define REG06_SY6974B_VINDPM_SHIFT				0


/* Address:07h */
#define REG07_SY6974B_ADDRESS					0x07

#define SY6974_BATFET_OFF 						1
#define SY6974_BATFET_ON 						0
#define SY6974_BATFET_RST_ENABLE				1
#define SY6974_BATFET_RST_DISABLE				0
#define REG07_SY6974B_IINDET_EN_MASK				BIT(7)
#define REG07_SY6974B_IINDET_EN_DET_COMPLETE			0x00
#define REG07_SY6974B_IINDET_EN_FORCE_DET			BIT(7)
#define REG07_SY6974B_IINDET_DIS_FORCE_DET			0
#define REG07_SY6974B_BATFET_DIS_MASK	BIT(5)
#define REG07_SY6974B_BATFET_DIS_SHIFT	5
#define REG07_SY6974B_BATFET_RST_EN_MASK		BIT(2)
#define REG07_SY6974B_BATFET_RST_EN_SHIFT			2


/* Address:08h */
#define REG08_SY6974B_ADDRESS					0x08

#define REG08_SY6974B_VBUS_STAT_MASK				(BIT(7) | BIT(6) | BIT(5))
#define REG08_SY6974B_VBUS_STAT_UNKNOWN				0x00
#define REG08_SY6974B_VBUS_STAT_SDP				BIT(5)
#define REG08_SY6974B_VBUS_STAT_CDP				BIT(6)
#define REG08_SY6974B_VBUS_STAT_DCP				(BIT(6) | BIT(5))
#define REG08_SY6974B_VBUS_STAT_OCP				(BIT(7) | BIT(5))
#define REG08_SY6974B_VBUS_STAT_FLOAT				(BIT(7) | BIT(6))
#define REG08_SY6974B_VBUS_STAT_OTG_MODE			(BIT(7) | BIT(6) | BIT(5))

#define REG08_SY6974B_CHG_STAT_MASK				(BIT(4) | BIT(3))
#define REG08_SY6974B_CHG_STAT_NO_CHARGING			0x00
#define REG08_SY6974B_CHG_STAT_PRE_CHARGING			BIT(3)
#define REG08_SY6974B_CHG_STAT_FAST_CHARGING			BIT(4)
#define REG08_SY6974B_CHG_STAT_CHG_TERMINATION			(BIT(4) | BIT(3))

#define REG08_SY6974B_POWER_GOOD_STAT_MASK			BIT(2)
#define REG08_SY6974B_POWER_GOOD_STAT_NOT_GOOD			0x00
#define REG08_SY6974B_POWER_GOOD_STAT_GOOD			BIT(2)


/* Address:09h */
#define REG09_SY6974B_ADDRESS					0x09

#define REG09_SY6974B_WDT_FAULT_MASK				BIT(7)
#define REG09_SY6974B_WDT_FAULT_NORMAL				0x00
#define REG09_SY6974B_WDT_FAULT_EXPIRATION			BIT(7)

#define REG09_SY6974B_OTG_FAULT_MASK				BIT(6)
#define REG09_SY6974B_OTG_FAULT_NORMAL				0x00
#define REG09_SY6974B_OTG_FAULT_ABNORMAL			BIT(6)

#define REG09_SY6974B_CHG_FAULT_MASK				(BIT(5) | BIT(4))
#define REG09_SY6974B_CHG_FAULT_NORMAL				0x00
#define REG09_SY6974B_CHG_FAULT_INPUT_ERROR			BIT(4)
#define REG09_SY6974B_CHG_FAULT_THERM_SHUTDOWN			BIT(5)
#define REG09_SY6974B_CHG_FAULT_TIMEOUT_ERROR			(BIT(5) | BIT(4))

#define REG09_SY6974B_BAT_FAULT_MASK				BIT(3)
#define REG09_SY6974B_BAT_FAULT_NORMAL				0x00	
#define REG09_SY6974B_BAT_FAULT_BATOVP				BIT(3)

#define REG09_SY6974B_NTC_FAULT_MASK				(BIT(2) | BIT(1) | BIT(0))
#define REG09_SY6974B_NTC_FAULT_NORMAL				0x00
#define REG09_SY6974B_NTC_FAULT_WARM				BIT(1)
#define REG09_SY6974B_NTC_FAULT_COOL				(BIT(1) | BIT(0))
#define REG09_SY6974B_NTC_FAULT_COLD				(BIT(2) | BIT(0))
#define REG09_SY6974B_NTC_FAULT_HOT				(BIT(2) | BIT(1))


/* Address:0Ah */
#define REG0A_SY6974B_ADDRESS					0x0A

#define REG0A_SY6974B_BUS_GD_MASK				BIT(7)
#define REG0A_SY6974B_BUS_GD_NO				0x00
#define REG0A_SY6974B_BUS_GD_YES				BIT(7)

#define REG0A_SY6974B_VINDPM_INT_MASK				BIT(1)
#define REG0A_SY6974B_VINDPM_INT_ALLOW				0x00
#define REG0A_SY6974B_VINDPM_INT_NOT_ALLOW			BIT(1)

#define REG0A_SY6974B_IINDPM_INT_MASK				BIT(0)
#define REG0A_SY6974B_IINDPM_INT_ALLOW				0x00
#define REG0A_SY6974B_IINDPM_INT_NOT_ALLOW			BIT(0)


/* Address:0Bh */
#define REG0B_SY6974B_ADDRESS					0x0B

#define REG0B_SY6974B_REG_RST_MASK				BIT(7)
#define REG0B_SY6974B_REG_RST_KEEP				0x00
#define REG0B_SY6974B_REG_RST_RESET				BIT(7)

#define REG0B_SY6974B_PN_MASK				(BIT(6) | BIT(5) | BIT(4) | BIT(3))
#define REG0B_SY6974B_PN				BIT(6)
#define REG0B_BQ25601D_PN				BIT(4)


/* Other */
#define SY6974B_FIRST_REG					0x00
#define SY6974B_LAST_REG					0x0B
#define SY6974B_REG_NUMBER					12
#define FG_INTR_CHARGER_IN	8
#define FG_INTR_CHARGER_OUT	4
#ifdef CONFIG_OPLUS_CHARGER_MTK
extern struct charger_consumer *charger_manager_get_by_name(
		struct device *dev,	const char *name);
extern struct oplus_chg_chip *g_oplus_chip;
extern void Charger_Detect_Release(void);
extern void Charger_Detect_Init(void);
extern int get_rtc_spare_oplus_fg_value(void);
extern int set_rtc_spare_oplus_fg_value(int value);
extern void oplus_mt_usb_connect(void);
extern void oplus_mt_usb_disconnect(void);
extern bool oplus_get_otg_online_status(void);
extern int oplus_battery_meter_get_battery_voltage(void);
extern void oplus_mt6789_usbtemp_set_cc_open(void);
extern void oplus_mt6789_usbtemp_set_typec_sinkonly(void);
extern void oplus_chg_set_chargerid_switch_val(int value);
extern int oplus_gauge_get_vbus_mvolts(void);
extern void mt_set_chargerid_switch_val(int value);
extern int mt_get_chargerid_switch_val(void);
extern void set_charger_ic(int sel);
extern int opchg_get_charger_type(void);
extern bool oplus_chg_is_usb_present(void);
extern void oplus_get_usbtemp_volt(struct oplus_chg_chip *chip);
extern bool oplus_usbtemp_condition(void);
extern void oplus_wake_up_usbtemp_thread(void);
extern int get_vbus_voltage(int *val);
extern bool oplus_pd_without_usb(void);
extern int oplus_force_get_subboard_temp(void);
extern bool is_usb_rdy(void);
#else
extern bool oplus_get_otg_online_status_default(void);
extern bool oplus_pd_without_usb(void);
extern bool oplus_pd_connected(void);
extern void oplus_notify_device_mode(bool enable);
#endif
#define WPC_PRECHARGE_CURRENT					480
#ifndef CONFIG_OPLUS_CHARGER_MTK
extern int qpnp_get_battery_voltage(void);
extern int opchg_get_charger_type(void);
extern int opchg_get_real_charger_type(void);
extern int smbchg_get_chargerid_switch_val(void);
extern void smbchg_set_chargerid_switch_val(int value);
extern int smbchg_get_chargerid_volt(void);
extern bool oplus_chg_is_usb_present(void);
extern int smbchg_get_boot_reason(void);
extern int oplus_chg_get_shutdown_soc(void);
extern int oplus_get_subboard_temp(void);
extern int oplus_chg_backup_soc(int backup_soc);
extern int oplus_chg_get_charger_subtype(void);
extern int oplus_chg_set_pd_config(void);
extern int oplus_chg_set_qc_config(void);
extern int oplus_sm8150_get_pd_type(void);
extern int oplus_chg_enable_qc_detect(void);
extern void oplus_get_usbtemp_volt(struct oplus_chg_chip *chip);
extern void oplus_set_typec_sinkonly(void);
extern void oplus_set_typec_cc_open(void);
extern void sgm7220_set_typec_sinkonly(void);
extern void sgm7220_set_typec_cc_open(void);
extern bool oplus_usbtemp_condition(void);
extern int opchg_get_charger_type(void);
extern void oplus_set_pd_active(int active);
extern void oplus_set_usb_props_type(enum power_supply_type type);
extern int oplus_get_adapter_svid(void);
extern void oplus_wake_up_usbtemp_thread(void);
extern int qpnp_get_prop_charger_voltage_now(void);
extern int qpnp_get_prop_ibus_now(void);
#endif
#endif
