/* linux/arch/arm/mach-msm/board-holiday.h
 *
 * Copyright (C) 2010-2011 HTC Corporation.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ARCH_ARM_MACH_MSM_BOARD_HOLIDAY_H
#define __ARCH_ARM_MACH_MSM_BOARD_HOLIDAY_H

#include <mach/board.h>

#define HOLIDAY_PROJECT_NAME	"holiday"

#define HOLIDAY_AP2MDM_PMIC_RESET_TIME_MS		1400

#define MSM_RAM_CONSOLE_BASE	MSM_HTC_RAM_CONSOLE_PHYS
#define MSM_RAM_CONSOLE_SIZE	MSM_HTC_RAM_CONSOLE_SIZE

#if defined(CONFIG_CRYPTO_DEV_QCRYPTO) || \
                defined(CONFIG_CRYPTO_DEV_QCRYPTO_MODULE) || \
                defined(CONFIG_CRYPTO_DEV_QCEDEV) || \
                defined(CONFIG_CRYPTO_DEV_QCEDEV_MODULE)
#define QCE_SIZE                0x10000
#define QCE_0_BASE                0x18500000
#endif

/*** Memory map ***/
#define MSM_ION_HEAP_NUM      5

<<<<<<< HEAD
#ifdef CONFIG_FB_MSM_HDMI_MSM_PANEL
#define MSM_FB_SIZE roundup(MSM_FB_PRIM_BUF_SIZE + 0x3F4800 + MSM_FB_DSUB_PMEM_ADDER, 4096)
#elif defined(CONFIG_FB_MSM_TVOUT)
#define MSM_FB_SIZE roundup(MSM_FB_PRIM_BUF_SIZE + 0x195000 + MSM_FB_DSUB_PMEM_ADDER, 4096)
#else 
#define MSM_FB_SIZE roundup(MSM_FB_PRIM_BUF_SIZE + MSM_FB_DSUB_PMEM_ADDER, 4096)
#endif 

#define MSM_FB_BASE                                (0x40400000)

/* PMEM memory map */
#define MSM_PMEM_ADSP_SIZE        0x1800000
#define MSM_PMEM_AUDIO_SIZE        0x239000

#define MSM_PMEM_ADSP_BASE                (0x80000000 - MSM_PMEM_ADSP_SIZE)
#define MSM_PMEM_AUDIO_BASE                (0x46400000)
/* END */
=======
#define MSM_FB_SIZE roundup((960 * ALIGN(540, 32) * 4 * 3) + 0x3F4800, 4096)
>>>>>>> 2a397c7... holiday: ION: rebase and cleanup.

// PMEM SMI
#define MSM_SMI_SIZE          0x4000000
<<<<<<< HEAD
<<<<<<< HEAD

#define KERNEL_SMI_BASE       (MSM_SMI_BASE)
#define KERNEL_SMI_SIZE       0x400000

#define USER_SMI_BASE         (KERNEL_SMI_BASE + KERNEL_SMI_SIZE)
=======
#define KERNEL_SMI_SIZE       0x600000
>>>>>>> 2a397c7... holiday: ION: rebase and cleanup.
=======
#define KERNEL_SMI_SIZE       0xE00000
>>>>>>> 18669ef... holiday: increase PMEM SMI size
#define USER_SMI_SIZE         (MSM_SMI_SIZE - KERNEL_SMI_SIZE)
#define MSM_PMEM_SMIPOOL_SIZE USER_SMI_SIZE

<<<<<<< HEAD
#define MSM_PMEM_KERNEL_EBI1_SIZE  0x600000 

#ifdef CONFIG_MSM_MULTIMEDIA_USE_ION
<<<<<<< HEAD
<<<<<<< HEAD
#define MSM_ION_SF_SIZE       0x4000000
#define MSM_ION_MM_FW_SIZE    0x200000  
#define MSM_ION_MM_SIZE       0x3D00000 
#define MSM_ION_MFC_SIZE      0x100000  
#define MSM_ION_WB_SIZE       0x2FD000  
=======
#define MSM_ION_MM_SIZE         0x2C00000
=======
#define MSM_ION_MM_SIZE         0x2D00000
>>>>>>> c8c76c6... holiday: increase ION_MM heap size by 1Mb (credit: sultanxda)
#define MSM_ION_SF_SIZE         0x2800000
#define MSM_ION_WB_SIZE         0x2FD000
#define MSM_SMI_ION_SIZE        0x3000000

#define MSM_ION_SF_BASE         0x7C600000
#define MSM_SMI_ION_BASE        0x40400000
#define MSM_ION_MM_BASE         0x40400000

<<<<<<< HEAD

>>>>>>> 2af6afd... holiday: update ION memory heaps for new vidc changes.

=======
>>>>>>> 2bef160... holiday: fixup ION_HEAP_NUM ifdef
#ifdef CONFIG_TZCOM
#define MSM_ION_QSECOM_SIZE   MSM_PMEM_KERNEL_EBI1_SIZE
#ifdef CONFIG_MSM_IOMMU
#define MSM_ION_HEAP_NUM      4
#else
#define MSM_ION_HEAP_NUM      5
#endif
#else
#ifdef CONFIG_MSM_IOMMU
#define MSM_ION_HEAP_NUM      3
#else
#define MSM_ION_HEAP_NUM      4
#endif
#endif
=======
// PMEM
#define MSM_PMEM_AUDIO_SIZE   0x239000
#define MSM_PMEM_ADSP_SIZE    0x1800000

// ION SMI
#define MSM_ION_MM_SIZE       0x3500000
>>>>>>> 2a397c7... holiday: ION: rebase and cleanup.

// ION
#define MSM_ION_WB_SIZE       0x800000
#define MSM_ION_SF_SIZE       0x29A0000
#define MSM_ION_MM_FW_SIZE    0x200000

// Base addresses
#define MSM_SMI_BASE          (0x38000000)
#define KERNEL_SMI_BASE       (MSM_SMI_BASE)
#define USER_SMI_BASE         (KERNEL_SMI_BASE + KERNEL_SMI_SIZE)
#define MSM_PMEM_SMIPOOL_BASE USER_SMI_BASE
#define MSM_ION_SF_BASE       (0x40400000)
#define MSM_PMEM_AUDIO_BASE   (0x46400000)
#define MSM_ION_WB_BASE       (0x7A900000)
#define MSM_ION_MM_FW_BASE    (0x7B100000)
#define MSM_ION_MM_BASE       (0x7B300000)
#define MSM_PMEM_ADSP_BASE    (0x7E800000)

// Userspace allocation
#define PHY_BASE_ADDR1  0x48000000
<<<<<<< HEAD
<<<<<<< HEAD
#define SIZE_ADDR1        0x34600000
=======
#define SIZE_ADDR1      0x32900000
//#define SIZE_ADDR1      0x2B300000
=======
#define SIZE_ADDR1      0x32000000
>>>>>>> 243c843... holiday: correct userspace memory allocation after PMEM SMI increase
/*** END Memory map ***/
>>>>>>> 2a397c7... holiday: ION: rebase and cleanup.

extern int panel_type;

/* GPIO definition */

/* Audio */
#define HOLIDAY_GPIO_AUD_A1026_WAKEUP	(70)
#define HOLIDAY_GPIO_AUD_A1026_INT	(94)
#define HOLIDAY_AUD_A1026_CLK   -1


/* Direct Keys */
#define HOLIDAY_GPIO_KEY_VOL_DOWN	(103)
#define HOLIDAY_GPIO_KEY_VOL_UP	  (104)
#define HOLIDAY_GPIO_KEY_POWER	   (125)

/* Battery */

/* Wifi */
#define HOLIDAY_GPIO_WIFI_IRQ			  (46)
#define HOLIDAY_GPIO_WIFI_SHUTDOWN_N	   (62)

/* Sensors */
#define HOLIDAY_GPIO_SENSOR_I2C_SCL		(115)
#define HOLIDAY_GPIO_SENSOR_I2C_SDA		(116)
#define HOLIDAY_GPIO_GYRO_INT			(126)
#define HOLIDAY_GPIO_COMPASS_INT		(128)
#define HOLIDAY_GPIO_GSENSOR_INT_N		(127)
#define HOLIDAY_LAYOUTS			{ \
		{ { 0,  1, 0}, { 1,  0,  0}, {0, 0, -1} }, \
		{ { 0, -1, 0}, {-1,  0,  0}, {0, 0,  1} }, \
		{ { 1,  0, 0}, { 0, -1,  0}, {0, 0, -1} }, \
		{ { 1,  0, 0}, { 0,  0,  1}, {0, 1,  0} }  \
					}
/* General */
#define HOLIDAY_GENERAL_I2C_SCL		(59)
#define HOLIDAY_GENERAL_I2C_SDA		(60)

/* Microp */

/* TP */
#define HOLIDAY_TP_I2C_SDA		   (51)
#define HOLIDAY_TP_I2C_SCL		   (52)
#define HOLIDAY_TP_ATT_N			 (117)

/* LCD */
#define HOLIDAY_GPIO_LCM_RST_N		(137)
#define HOLIDAY_GPIO_LCM_ID0		(64)
#define HOLIDAY_GPIO_LCM_ID1		(65)
#define HOLIDAY_GPIO_LCM_TE			(28)

/* Audio */
#define HOLIDAY_AUD_CODEC_RST		(118)

/* Battery */
#define HOLIDAY_GPIO_MBAT_IN		(61)
#define HOLIDAY_GPIO_CHG_INT		(124)

/* BT */
#define HOLIDAY_GPIO_BT_HOST_WAKE	  (45)
#define HOLIDAY_GPIO_BT_UART1_TX	   (53)
#define HOLIDAY_GPIO_BT_UART1_RX	   (54)
#define HOLIDAY_GPIO_BT_UART1_CTS	  (55)
#define HOLIDAY_GPIO_BT_UART1_RTS	  (56)
#define HOLIDAY_GPIO_BT_CHIP_WAKE	  (130)
#define HOLIDAY_GPIO_BT_RESET_N		(142)
#define HOLIDAY_GPIO_BT_SHUTDOWN_N	 (57)

/* USB and UART */
#define HOLIDAY_GPIO_UART_RX		   (105)
#define HOLIDAY_GPIO_UART_TX		   (106)

/* Cable detect */
#define HOLIDAY_GPIO_MHL_USB_SEL		(1)
#define HOLIDAY_GPIO_USB_ID				(63)

/* Camera */
#define HOLIDAY_CAM_I2C_SDA			 (47)
#define HOLIDAY_CAM_I2C_SCL			 (48)
#define HOLIDAY_CLK_SWITCH 				(44)
#define HOLIDAY_CAM1_RST				(49)
#define HOLIDAY_CAM1_VCM_PD				(58)
#define HOLIDAY_CAM2_RST				(101)
#define HOLIDAY_CAM2_STANDBY			(102)
#define HOLIDAY_CAM2_CAM_ID				(43)

/* Flashlight */
#define HOLIDAY_FLASH_EN			 (138)
#define HOLIDAY_TORCH_EN			 (30)

#ifdef CONFIG_FB_MSM_HDMI_MHL
/* MHL */
#define HOLIDAY_GPIO_MHL_RST_N   		(2)
#define HOLIDAY_GPIO_MHL_INTR_N  		(50)
#define HOLIDAY_GPIO_MHL_SCL			(170)
#define HOLIDAY_GPIO_MHL_SDA			(171)
#define HOLIDAY_GPIO_MHL_HPD			(172)
#endif

/* Accessory */
#define HOLIDAY_GPIO_AUD_HP_DET		(31)

/* SPI */
#define HOLIDAY_SPI_DO				 (33)
#define HOLIDAY_SPI_DI				 (34)
#define HOLIDAY_SPI_CS				 (35)
#define HOLIDAY_SPI_CLK				(36)

/* SD */
#define HOLIDAY_SD_DETECT_PIN				(37)

/* LTE */
#define HOLIDAY_AP2MDM_STATUS		 (136)
#define HOLIDAY_MDM2AP_STATUS		 (134)
#define HOLIDAY_MDM2AP_WAKEUP		  (40)
#define HOLIDAY_MDM2AP_ERRFATAL	   (133)
#define HOLIDAY_AP2MDM_ERRFATAL		(93)

#define HOLIDAY_AP2MDM_PMIC_RESET_N   (131)
#define HOLIDAY_AP2MDM_KPDPWR_N		(38)
#define HOLIDAY_AP2PMIC_TMPNI_CKEN	(141)

#define HOLIDAY_MDM2AP_VDDMIN		(140)
#define HOLIDAY_MDM2AP_SYNC		   (129)
#define HOLIDAY_AP2MDM_WAKEUP		 (135)
#define HOLIDAY_MDM2AP_VFR			 (29)

#define PSNENOR_INTz		(123)
/* PMIC */

/* PMIC GPIO definition */
#define PMGPIO(x) (x-1)
#define HOLIDAY_VOL_UP			 (104)
#define HOLIDAY_VOL_DN			 (103)
#define HOLIDAY_AUD_MIC_SEL2	PMGPIO(16)
#define HOLIDAY_AUD_HANDSET_ENO	PMGPIO(18)
#define HOLIDAY_AUD_A1026_RST	PMGPIO(19)
/* #define HOLIDAY_AUD_QTR_RESET	  PMGPIO(21) */
#define HOLIDAY_PS_VOUT			PMGPIO(22)
#define HOLIDAY_GREEN_LED		  PMGPIO(24)
#define HOLIDAY_AMBER_LED		  PMGPIO(25)
#define HOLIDAY_AUD_MIC_SEL1		PMGPIO(37)
#define HOLIDAY_PLS_INT			PMGPIO(35)
#define HOLIDAY_WIFI_BT_SLEEP_CLK  PMGPIO(38)
#define HOLIDAY_TP_RST			 PMGPIO(23)
#define HOLIDAY_CHG_STAT	   PMGPIO(33)
#define HOLIDAY_AUD_REMO_PRES	  PMGPIO(7)

int __init holiday_init_mmc(void);
void __init holiday_audio_init(void);
int __init holiday_init_keypad(void);
int __init holiday_wifi_init(void);

#endif /* __ARCH_ARM_MACH_MSM_BOARD_HOLIDAY_H */
