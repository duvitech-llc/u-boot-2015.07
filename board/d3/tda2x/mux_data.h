/*
 * Copyright (C) 2014 Texas Instruments Incorporated - http://www.ti.com
 * Copyright (C) 2015 D3 Engineering
 *
 * Based on board/ti/beagle_x15/mux_data.c
 * Author: Felipe Balbi <balbi@ti.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */
#ifndef _MUX_DATA_D3_TDA2ECO_H_
#define _MUX_DATA_D3_TDA2ECO_H_

#include <asm/arch/mux_dra7xx.h>

const struct pad_conf_entry core_padconf_array_essential_d3_tda2eco[] = {
	{MDIO_MCLK, (M0 | PIN_INPUT_PULLUP)},	/* mdio_mclk.mdio_mclk */
	{MDIO_D, (M0 | PIN_INPUT_PULLUP)},	/* mdio_d.mdio_d */
	{RMII_MHZ_50_CLK, (M14 | PIN_INPUT_PULLUP)},/* RMIIMHZ50CLK.gpio5_17 */
	{RGMII0_TXC, (M0 | PIN_INPUT_PULLDOWN | MANUAL_MODE)},	/* rgmii0_txc.rgmii0_txc */
	{RGMII0_TXCTL, (M0 | PIN_INPUT_PULLDOWN | MANUAL_MODE)},	/* rgmii0_txctl.rgmii0_txctl */
	{RGMII0_TXD3, (M0 | PIN_INPUT_PULLDOWN | MANUAL_MODE)},	/* rgmii0_txd3.rgmii0_txd3 */
	{RGMII0_TXD2, (M0 | PIN_INPUT_PULLDOWN | MANUAL_MODE)},	/* rgmii0_txd2.rgmii0_txd2 */
	{RGMII0_TXD1, (M0 | PIN_INPUT_PULLDOWN | MANUAL_MODE)},	/* rgmii0_txd1.rgmii0_txd1 */
	{RGMII0_TXD0, (M0 | PIN_INPUT_PULLDOWN | MANUAL_MODE)},	/* rgmii0_txd0.rgmii0_txd0 */
	{RGMII0_RXC, (M0 | PIN_INPUT_PULLDOWN | MANUAL_MODE)},	/* rgmii0_rxc.rgmii0_rxc */
	{RGMII0_RXCTL, (M0 | PIN_INPUT_PULLDOWN | MANUAL_MODE)},	/* rgmii0_rxctl.rgmii0_rxctl */
	{RGMII0_RXD3, (M0 | PIN_INPUT_PULLUP | MANUAL_MODE)},	/* rgmii0_rxd3.rgmii0_rxd3 */
	{RGMII0_RXD2, (M0 | PIN_INPUT_PULLUP | MANUAL_MODE)},	/* rgmii0_rxd2.rgmii0_rxd2 */
	{RGMII0_RXD1, (M0 | PIN_INPUT_PULLUP | MANUAL_MODE)},	/* rgmii0_rxd1.rgmii0_rxd1 */
	{RGMII0_RXD0, (M0 | PIN_INPUT_PULLUP | MANUAL_MODE)},	/* rgmii0_rxd0.rgmii0_rxd0 */
	{USB1_DRVVBUS, (M0 | PIN_INPUT_SLEW)},	/* usb1_drvvbus.usb1_drvvbus */
	{USB2_DRVVBUS, (M0 | PIN_INPUT_SLEW)},	/* usb2_drvvbus.usb2_drvvbus */
	{XREF_CLK2, (M15 | PIN_INPUT_PULLDOWN)},	/* xref_clk2.timer15 */
	{XREF_CLK3, (M15 | PIN_INPUT_PULLDOWN)},	/* xref_clk3.timer16 */
	{MMC1_CLK, (M0 | PIN_INPUT_PULLUP)},	/* mmc1_clk.mmc1_clk */
	{MMC1_CMD, (M0 | PIN_INPUT_PULLUP)},	/* mmc1_cmd.mmc1_cmd */
	{MMC1_DAT0, (M0 | PIN_INPUT_PULLUP)},	/* mmc1_dat0.mmc1_dat0 */
	{MMC1_DAT1, (M0 | PIN_INPUT_PULLUP)},	/* mmc1_dat1.mmc1_dat1 */
	{MMC1_DAT2, (M0 | PIN_INPUT_PULLUP)},	/* mmc1_dat2.mmc1_dat2 */
	{MMC1_DAT3, (M0 | PIN_INPUT_PULLUP)},	/* mmc1_dat3.mmc1_dat3 */
	{MMC1_SDCD, (M0 | PIN_INPUT_PULLUP | SLEWCONTROL)},	/* mmc1_sdcd.mmc1_sdcd */
	{MMC1_SDWP, (M0 | 0x000d0000)},		/* mmc1_sdwp.mmc1_sdwp */
	{SPI1_SCLK, (M0 | PIN_OUTPUT)},		/* spi1_sclk.spi1_sclk */
	{SPI1_D1, (M0 | PIN_INPUT_SLEW)},	/* spi1_d1.spi1_d1 */
	{SPI1_D0, (M0 | PIN_INPUT_SLEW)},	/* spi1_d0.spi1_d0 */
	{SPI1_CS0, (M0 | PIN_OUTPUT)},		/* spi1_cs0.spi1_cs0 */
	{SPI1_CS1, (M0 | PIN_OUTPUT)},		/* spi1_cs1.spi1_cs1 */
	{SPI1_CS2, (M5 | PIN_OUTPUT)},		/* spi1_cs2.mdio_mclk */
	{SPI1_CS3, (M5 | PIN_INPUT_PULLUP)},	/* spi1_cs3.mdio_d */
	{SPI2_SCLK, (M0 | PIN_OUTPUT)},		/* spi2_sclk.spi2_sclk */
	{SPI2_D1, (M0 | PIN_INPUT_SLEW)},	/* spi2_d1.spi2_d1 */
	{SPI2_D0, (M0 | PIN_INPUT_SLEW)},	/* spi2_d0.spi2_d0 */
	{SPI2_CS0, (M0 | PIN_OUTPUT | SLEWCONTROL)},	/* spi2_cs0.spi2_cs0 */
	{DCAN1_TX, (M0 | PIN_INPUT_PULLUP | SLEWCONTROL)},	/* dcan1_tx.dcan1_tx */
	{DCAN1_RX, (M0 | PIN_INPUT_PULLUP | SLEWCONTROL)},	/* dcan1_rx.dcan1_rx */
	{UART1_RXD, (M0 | PIN_INPUT_PULLUP | SLEWCONTROL)},	/* uart1_rxd.uart1_rxd */
	{UART1_TXD, (M0 | PIN_INPUT_PULLUP | SLEWCONTROL)},	/* uart1_txd.uart1_txd */
	{UART1_CTSN, (M0 | PIN_INPUT_PULLUP)},	/* uart1_ctsn.uart1_ctsn */
	{UART1_RTSN, (M0 | PIN_INPUT_PULLUP)},	/* uart1_rtsn.uart1_rtsn */
	{UART2_RXD, (M14 | PIN_INPUT_PULLUP)},	/* uart2_rxd.gpio7_26 */
	{UART2_TXD, (M14 | PIN_INPUT_PULLUP)},	/* uart2_txd.uart7_27 */
	/*
	 * The following are in early padconf:
	 * UART2_CTSN, UART2_RTSN (used for UART3/console) I2C1_SDA, I2C1_SCL,
	 * I2C2_SDA, I2C2_SCL (used for TPM).
	 */
	{WAKEUP0, (M14 | PIN_INPUT_PULLUP)},	/* Wakeup0.gpio1_0 */
	{WAKEUP3, (M14 | PIN_INPUT_PULLUP)},	/* Wakeup3.gpio1_3 */
	{ON_OFF, (M0 | PIN_OUTPUT_PULLUP)},	/* on_off.on_off */
	{RTC_PORZ, (M0 | PIN_OUTPUT)},		/* rtc_porz.rtc_porz */
	{TMS, (M0 | PIN_INPUT_PULLUP)},		/* tms.tms */
	{TDI, (M0 | PIN_INPUT_PULLUP | SLEWCONTROL)},	/* tdi.tdi */
	{TDO, (M0 | PIN_INPUT_PULLUP)},		/* tdo.tdo */
	{TCLK, (M0 | PIN_INPUT_PULLUP)},	/* tclk.tclk */
	{TRSTN, (M0 | PIN_INPUT_PULLDOWN)},	/* trstn.trstn */
	{RTCK, (M0 | PIN_INPUT)},		/* rtck.rtck */
	{EMU0, (M0 | PIN_INPUT_PULLUP)},	/* emu0.emu0 */
	{EMU1, (M0 | PIN_INPUT_PULLUP)},	/* emu1.emu1 */
	{RESETN, (M0 | PIN_OUTPUT_PULLUP)},	/* resetn.resetn */
	{RSTOUTN, (M0 | PIN_OUTPUT_PULLDOWN)},	/* rstoutn.rstoutn */
};

const struct pad_conf_entry early_padconf[] = {
	{UART2_CTSN, (M2 | PIN_INPUT_SLEW)},	/* uart2_ctsn.uart3_rxd */
	{UART2_RTSN, (M1 | PIN_INPUT_SLEW)},	/* uart2_rtsn.uart3_txd */
	{I2C1_SDA, (PIN_INPUT_PULLUP | M0)},	/* I2C1_SDA */
	{I2C1_SCL, (PIN_INPUT_PULLUP | M0)},	/* I2C1_SCL */
	{I2C2_SDA, (PIN_INPUT_PULLDOWN | M0)},  /* I2C2_SDA -- used for TPM */
	{I2C2_SCL, (PIN_INPUT_PULLDOWN | M0)},  /* I2C2_SCL -- used for TPM */
	{VOUT1_D4, (M14 | PIN_OUTPUT)},		/* vout1_d4.gpio8_4 TPM RST */
};

#ifdef CONFIG_IODELAY_RECALIBRATION
const struct iodelay_cfg_entry iodelay_cfg_array_d3_tda2eco[] = {
	{0x0114, 2980, 0},	/* CFG_GPMC_A0_IN */
	{0x0120, 2648, 0},	/* CFG_GPMC_A10_IN */
	{0x012C, 2918, 0},	/* CFG_GPMC_A11_IN */
	{0x0138, 2605, 45},	/* CFG_GPMC_A12_IN */
	{0x0144, 0, 0},		/* CFG_GPMC_A13_IN */
	{0x0150, 1976, 1389},	/* CFG_GPMC_A14_IN */
	{0x015C, 1872, 1408},	/* CFG_GPMC_A15_IN */
	{0x0168, 1914, 1506},	/* CFG_GPMC_A16_IN */
	{0x0170, 57, 0},	/* CFG_GPMC_A16_OUT */
	{0x0174, 1904, 1471},	/* CFG_GPMC_A17_IN */
	{0x0188, 1690, 0},	/* CFG_GPMC_A18_OUT */
	{0x0198, 2917, 0},	/* CFG_GPMC_A1_IN */
	{0x0204, 3156, 178},	/* CFG_GPMC_A2_IN */
	{0x0210, 3109, 246},	/* CFG_GPMC_A3_IN */
	{0x021C, 3142, 100},	/* CFG_GPMC_A4_IN */
	{0x0228, 3084, 33},	/* CFG_GPMC_A5_IN */
	{0x0234, 2778, 0},	/* CFG_GPMC_A6_IN */
	{0x0240, 3110, 0},	/* CFG_GPMC_A7_IN */
	{0x024C, 2874, 0},	/* CFG_GPMC_A8_IN */
	{0x0258, 3072, 0},	/* CFG_GPMC_A9_IN */
	{0x0374, 0, 0},		/* CFG_GPMC_CS2_OUT */
	{0x06F0, 480, 0},	/* CFG_RGMII0_RXC_IN */
	{0x06FC, 111, 1641},	/* CFG_RGMII0_RXCTL_IN */
	{0x0708, 272, 1116},	/* CFG_RGMII0_RXD0_IN */
	{0x0714, 243, 1260},	/* CFG_RGMII0_RXD1_IN */
	{0x0720, 0, 1614},	/* CFG_RGMII0_RXD2_IN */
	{0x072C, 105, 1673},	/* CFG_RGMII0_RXD3_IN */
	{0x0740, 531, 120},	/* CFG_RGMII0_TXC_OUT */
	{0x074C, 201, 60},	/* CFG_RGMII0_TXCTL_OUT */
	{0x0758, 229, 120},	/* CFG_RGMII0_TXD0_OUT */
	{0x0764, 141, 0},	/* CFG_RGMII0_TXD1_OUT */
	{0x0770, 495, 120},	/* CFG_RGMII0_TXD2_OUT */
	{0x077C, 660, 120},	/* CFG_RGMII0_TXD3_OUT */
	{0x0A70, 65, 70},	/* CFG_VIN2A_D12_OUT */
	{0x0A7C, 125, 70},	/* CFG_VIN2A_D13_OUT */
	{0x0A88, 0, 70},	/* CFG_VIN2A_D14_OUT */
	{0x0A94, 0, 70},	/* CFG_VIN2A_D15_OUT */
	{0x0AA0, 65, 70},	/* CFG_VIN2A_D16_OUT */
	{0x0AAC, 0, 0},		/* CFG_VIN2A_D17_OUT */
	{0x0AB0, 612, 0},	/* CFG_VIN2A_D18_IN */
	{0x0ABC, 4, 927},	/* CFG_VIN2A_D19_IN */
	{0x0AD4, 136, 1340},	/* CFG_VIN2A_D20_IN */
	{0x0AE0, 130, 1450},	/* CFG_VIN2A_D21_IN */
	{0x0AEC, 144, 1269},	/* CFG_VIN2A_D22_IN */
	{0x0AF8, 0, 1330},	/* CFG_VIN2A_D23_IN */
};

#endif
#endif /* _MUX_DATA_D3_TDA2ECO_H_ */
