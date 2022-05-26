/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause) */
/*
 * Copyright (C) 2021 Linaro Ltd.
 * Author: Sam Protsenko <semen.protsenko@linaro.org>
 *
 * Device Tree binding constants for Exynos850 clock controller.
 */

#ifndef _DT_BINDINGS_CLOCK_EXYNOS_850_H
#define _DT_BINDINGS_CLOCK_EXYNOS_850_H

/* CMU_TOP */
#define CLK_FOUT_SHARED0_PLL		1
#define CLK_FOUT_SHARED1_PLL		2
#define CLK_FOUT_MMC_PLL		3
#define CLK_MOUT_SHARED0_PLL		4
#define CLK_MOUT_SHARED1_PLL		5
#define CLK_MOUT_MMC_PLL		6
#define CLK_MOUT_CORE_BUS		7
#define CLK_MOUT_CORE_CCI		8
#define CLK_MOUT_CORE_MMC_EMBD		9
#define CLK_MOUT_CORE_SSS		10
#define CLK_MOUT_DPU			11
#define CLK_MOUT_HSI_BUS		12
#define CLK_MOUT_HSI_MMC_CARD		13
#define CLK_MOUT_HSI_USB20DRD		14
#define CLK_MOUT_PERI_BUS		15
#define CLK_MOUT_PERI_UART		16
#define CLK_MOUT_PERI_IP		17
#define CLK_DOUT_SHARED0_DIV3		18
#define CLK_DOUT_SHARED0_DIV2		19
#define CLK_DOUT_SHARED1_DIV3		20
#define CLK_DOUT_SHARED1_DIV2		21
#define CLK_DOUT_SHARED0_DIV4		22
#define CLK_DOUT_SHARED1_DIV4		23
#define CLK_DOUT_CORE_BUS		24
#define CLK_DOUT_CORE_CCI		25
#define CLK_DOUT_CORE_MMC_EMBD		26
#define CLK_DOUT_CORE_SSS		27
#define CLK_DOUT_DPU			28
#define CLK_DOUT_HSI_BUS		29
#define CLK_DOUT_HSI_MMC_CARD		30
#define CLK_DOUT_HSI_USB20DRD		31
#define CLK_DOUT_PERI_BUS		32
#define CLK_DOUT_PERI_UART		33
#define CLK_DOUT_PERI_IP		34
#define CLK_GOUT_CORE_BUS		35
#define CLK_GOUT_CORE_CCI		36
#define CLK_GOUT_CORE_MMC_EMBD		37
#define CLK_GOUT_CORE_SSS		38
#define CLK_GOUT_DPU			39
#define CLK_GOUT_HSI_BUS		40
#define CLK_GOUT_HSI_MMC_CARD		41
#define CLK_GOUT_HSI_USB20DRD		42
#define CLK_GOUT_PERI_BUS		43
#define CLK_GOUT_PERI_UART		44
#define CLK_GOUT_PERI_IP		45
#define TOP_NR_CLK			46

/* CMU_HSI */
#define CLK_MOUT_HSI_BUS_USER		1
#define CLK_MOUT_HSI_MMC_CARD_USER	2
#define CLK_MOUT_HSI_USB20DRD_USER	3
#define CLK_MOUT_HSI_RTC		4
#define CLK_GOUT_USB_RTC_CLK		5
#define CLK_GOUT_USB_REF_CLK		6
#define CLK_GOUT_USB_PHY_REF_CLK	7
#define CLK_GOUT_USB_PHY_ACLK		8
#define CLK_GOUT_USB_BUS_EARLY_CLK	9
#define CLK_GOUT_GPIO_HSI_PCLK		10
#define CLK_GOUT_MMC_CARD_ACLK		11
#define CLK_GOUT_MMC_CARD_SDCLKIN	12
#define CLK_GOUT_SYSREG_HSI_PCLK	13
#define HSI_NR_CLK			14

/* CMU_PERI */
#define CLK_MOUT_PERI_BUS_USER		1
#define CLK_MOUT_PERI_UART_USER		2
#define CLK_MOUT_PERI_HSI2C_USER	3
#define CLK_MOUT_PERI_SPI_USER		4
#define CLK_DOUT_PERI_HSI2C0		5
#define CLK_DOUT_PERI_HSI2C1		6
#define CLK_DOUT_PERI_HSI2C2		7
#define CLK_DOUT_PERI_SPI0		8
#define CLK_GOUT_PERI_HSI2C0		9
#define CLK_GOUT_PERI_HSI2C1		10
#define CLK_GOUT_PERI_HSI2C2		11
#define CLK_GOUT_GPIO_PERI_PCLK		12
#define CLK_GOUT_HSI2C0_IPCLK		13
#define CLK_GOUT_HSI2C0_PCLK		14
#define CLK_GOUT_HSI2C1_IPCLK		15
#define CLK_GOUT_HSI2C1_PCLK		16
#define CLK_GOUT_HSI2C2_IPCLK		17
#define CLK_GOUT_HSI2C2_PCLK		18
#define CLK_GOUT_I2C0_PCLK		19
#define CLK_GOUT_I2C1_PCLK		20
#define CLK_GOUT_I2C2_PCLK		21
#define CLK_GOUT_I2C3_PCLK		22
#define CLK_GOUT_I2C4_PCLK		23
#define CLK_GOUT_I2C5_PCLK		24
#define CLK_GOUT_I2C6_PCLK		25
#define CLK_GOUT_MCT_PCLK		26
#define CLK_GOUT_PWM_MOTOR_PCLK		27
#define CLK_GOUT_SPI0_IPCLK		28
#define CLK_GOUT_SPI0_PCLK		29
#define CLK_GOUT_SYSREG_PERI_PCLK	30
#define CLK_GOUT_UART_IPCLK		31
#define CLK_GOUT_UART_PCLK		32
#define CLK_GOUT_WDT0_PCLK		33
#define CLK_GOUT_WDT1_PCLK		34
#define PERI_NR_CLK			35

/* CMU_CORE */
#define CLK_MOUT_CORE_BUS_USER		1
#define CLK_MOUT_CORE_CCI_USER		2
#define CLK_MOUT_CORE_MMC_EMBD_USER	3
#define CLK_MOUT_CORE_SSS_USER		4
#define CLK_MOUT_CORE_GIC		5
#define CLK_DOUT_CORE_BUSP		6
#define CLK_GOUT_CCI_ACLK		7
#define CLK_GOUT_GIC_CLK		8
#define CLK_GOUT_MMC_EMBD_ACLK		9
#define CLK_GOUT_MMC_EMBD_SDCLKIN	10
#define CLK_GOUT_SSS_ACLK		11
#define CLK_GOUT_SSS_PCLK		12
#define CORE_NR_CLK			13

/* CMU_DPU */
#define CLK_MOUT_DPU_USER		1
#define CLK_DOUT_DPU_BUSP		2
#define CLK_GOUT_DPU_CMU_DPU_PCLK	3
#define CLK_GOUT_DPU_DECON0_ACLK	4
#define CLK_GOUT_DPU_DMA_ACLK		5
#define CLK_GOUT_DPU_DPP_ACLK		6
#define CLK_GOUT_DPU_PPMU_ACLK		7
#define CLK_GOUT_DPU_PPMU_PCLK		8
#define CLK_GOUT_DPU_SMMU_CLK		9
#define CLK_GOUT_DPU_SYSREG_PCLK	10
#define DPU_NR_CLK			11

#endif /* _DT_BINDINGS_CLOCK_EXYNOS_850_H */
