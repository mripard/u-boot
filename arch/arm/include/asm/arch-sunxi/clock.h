/*
 * (C) Copyright 2007-2011
 * Allwinner Technology Co., Ltd. <www.allwinnertech.com>
 * Tom Cubie <tangliang@allwinnertech.com>
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef _SUNXI_CLOCK_H
#define _SUNXI_CLOCK_H

#include <linux/types.h>

#define CLK_GATE_OPEN			0x1
#define CLK_GATE_CLOSE			0x0

/* clock control module regs definition */
#if defined(CONFIG_SUN6I)
struct sunxi_ccm_reg {
	u32 pll1_cfg;		/* 0x00 pll1 control */
	u32 reserved0;
	u32 pll2_cfg;		/* 0x08 pll2 control */
	u32 reserved1;
	u32 pll3_cfg;		/* 0x10 pll3 control */
	u32 reserved2;
	u32 pll4_cfg;		/* 0x18 pll4 control */
	u32 reserved3;
	u32 pll5_cfg;		/* 0x20 pll5 control */
	u32 reserved4;
	u32 pll6_cfg;		/* 0x28 pll6 control */
	u32 reserved5;
	u32 pll7_cfg;		/* 0x30 pll7 control */
	u32 reserved6;
	u32 pll8_cfg;		/* 0x38 pll8 control */
	u32 reserved7;
	u32 mipi_pll_cfg;	/* 0x40 MIPI pll control */
	u32 pll9_cfg;		/* 0x44 pll9 control */
	u32 pll10_cfg;		/* 0x48 pll10 control */
	u32 reserved8;
	u32 cpu_axi_cfg;	/* 0x50 CPU/AXI divide ratio */
	u32 ahb1_apb1_div;	/* 0x54 AHB1/APB1 divide ratio */
	u32 apb2_div;		/* 0x58 APB2 divide ratio */
	u32 axi_gate;		/* 0x5c axi module clock gating */
	u32 ahb_gate0;		/* 0x60 ahb module clock gating 0 */
	u32 ahb_gate1;		/* 0x64 ahb module clock gating 1 */
	u32 apb1_gate;		/* 0x68 apb1 module clock gating */
	u32 apb2_gate;		/* 0x6c apb2 module clock gating */
	u32 reserved9[4];
	u32 nand0_clk_cfg;	/* 0x80 nand0 clock control */
	u32 nand1_clk_cfg;	/* 0x84 nand1 clock control */
	u32 sd0_clk_cfg;	/* 0x88 sd0 clock control */
	u32 sd1_clk_cfg;	/* 0x8c sd1 clock control */
	u32 sd2_clk_cfg;	/* 0x90 sd2 clock control */
	u32 sd3_clk_cfg;	/* 0x94 sd3 clock control */
	u32 ts_clk_cfg;		/* 0x98 transport stream clock control */
	u32 ss_clk_cfg;		/* 0x9c security system clock control */
	u32 spi0_clk_cfg;	/* 0xa0 spi0 clock control */
	u32 spi1_clk_cfg;	/* 0xa4 spi1 clock control */
	u32 spi2_clk_cfg;	/* 0xa8 spi2 clock control */
	u32 spi3_clk_cfg;	/* 0xac spi3 clock control */
	u32 i2s0_clk_cfg;	/* 0xb0 I2S0 clock control*/
	u32 i2s1_clk_cfg;	/* 0xb4 I2S1 clock control */
	u32 reserved10[2];
	u32 spdif_clk_cfg;	/* 0xc0 SPDIF clock control */
	u32 reserved11[2];
	u32 usb_clk_cfg;	/* 0xcc USB clock control */
	u32 gmac_clk_cfg;	/* 0xd0 GMAC clock control */
	u32 reserved12[7];
	u32 mdfs_clk_cfg;	/* 0xf0 MDFS clock control */
	u32 dram_clk_cfg;	/* 0xf4 DRAM configuration clock control */
	u32 reserved13[2];
	u32 dram_clk_gate;	/* 0x100 DRAM module gating */
	u32 be0_clk_cfg;	/* 0x104 BE0 module clock */
	u32 be1_clk_cfg;	/* 0x108 BE1 module clock */
	u32 fe0_clk_cfg;	/* 0x10c FE0 module clock */
	u32 fe1_clk_cfg;	/* 0x110 FE1 module clock */
	u32 mp_clk_cfg;		/* 0x114 MP module clock */
	u32 lcd0_ch0_clk_cfg;	/* 0x118 LCD0 CH0 module clock */
	u32 lcd1_ch0_clk_cfg;	/* 0x11c LCD1 CH0 module clock */
	u32 reserved14[3];
	u32 lcd0_ch1_clk_cfg;	/* 0x12c LCD0 CH1 module clock */
	u32 lcd1_ch1_clk_cfg;	/* 0x130 LCD1 CH1 module clock */
	u32 csi0_clk_cfg;	/* 0x134 CSI0 module clock */
	u32 csi1_clk_cfg;	/* 0x138 CSI1 module clock */
	u32 ve_clk_cfg;		/* 0x13c VE module clock */
	u32 adda_clk_cfg;	/* 0x140 ADDA module clock */
	u32 avs_clk_cfg;	/* 0x144 AVS module clock */
	u32 dmic_clk_cfg;	/* 0x148 Digital Mic module clock*/
	u32 reserved15;
	u32 hdmi_clk_cfg;	/* 0x150 HDMI module clock */
	u32 ps_clk_cfg;		/* 0x154 PS module clock */
	u32 mtc_clk_cfg;	/* 0x158 MTC module clock */
	u32 mbus0_clk_cfg;	/* 0x15c MBUS0 module clock */
	u32 mbus1_clk_cfg;	/* 0x160 MBUS0 module clock */
	u32 reserved16;
	u32 mipi_dsi_clk_cfg;	/* 0x168 MIPI DSI clock control */
	u32 mipi_csi_clk_cfg;	/* 0x16c MIPI CSI clock control */
	u32 reserved17[4];
	u32 iep_drc0_clk_cfg;	/* 0x180 IEP DRC0 module clock */
	u32 iep_drc1_clk_cfg;	/* 0x184 IEP DRC1 module clock */
	u32 iep_deu0_clk_cfg;	/* 0x188 IEP DEU0 module clock */
	u32 iep_deu1_clk_cfg;	/* 0x18c IEP DEU1 module clock */
	u32 reserved18[4];
	u32 gpu_core_clk_cfg;	/* 0x1a0 GPU core clock config */
	u32 gpu_mem_clk_cfg;	/* 0x1a4 GPU memory clock config */
	u32 gpu_hyd_clk_cfg;	/* 0x1a0 GPU HYD clock config */
	u32 reserved19[21];
	u32 pll_lock;		/* 0x200 PLL Lock Time */
	u32 pll1_lock;		/* 0x204 PLL1 Lock Time */
	u32 reserved20[6];
	u32 pll1_bias_cfg;	/* 0x220 PLL1 Bias config */
	u32 pll2_bias_cfg;	/* 0x224 PLL2 Bias config */
	u32 pll3_bias_cfg;	/* 0x228 PLL3 Bias config */
	u32 pll4_bias_cfg;	/* 0x22c PLL4 Bias config */
	u32 pll5_bias_cfg;	/* 0x230 PLL5 Bias config */
	u32 pll6_bias_cfg;	/* 0x234 PLL6 Bias config */
	u32 pll7_bias_cfg;	/* 0x238 PLL7 Bias config */
	u32 pll8_bias_cfg;	/* 0x23c PLL8 Bias config */
	u32 mipi_bias_cfg;	/* 0x240 MIPI Bias config */
	u32 pll9_bias_cfg;	/* 0x244 PLL9 Bias config */
	u32 pll10_bias_cfg;	/* 0x248 PLL10 Bias config */
	u32 reserved21[13];
	u32 pll1_pattern_cfg;	/* 0x280 PLL1 Pattern config */
	u32 pll2_pattern_cfg;	/* 0x284 PLL2 Pattern config */
	u32 pll3_pattern_cfg;	/* 0x288 PLL3 Pattern config */
	u32 pll4_pattern_cfg;	/* 0x28c PLL4 Pattern config */
	u32 pll5_pattern_cfg;	/* 0x290 PLL5 Pattern config */
	u32 pll6_pattern_cfg;	/* 0x294 PLL6 Pattern config */
	u32 pll7_pattern_cfg;	/* 0x298 PLL7 Pattern config */
	u32 pll8_pattern_cfg;	/* 0x29c PLL8 Pattern config */
	u32 mipi_pattern_cfg;	/* 0x2a0 MIPI Pattern config */
	u32 pll9_pattern_cfg;	/* 0x2a4 PLL9 Pattern config */
	u32 pll10_pattern_cfg;	/* 0x2a8 PLL10 Pattern config */
	u32 reserved22[5];
	u32 ahb_reset0_cfg;	/* 0x2c0 AHB1 Reset 0 config */
	u32 ahb_reset1_cfg;	/* 0x2c4 AHB1 Reset 1 config */
	u32 ahb_reset2_cfg;	/* 0x2c8 AHB1 Reset 2 config */
	u32 reserved23;
	u32 apb1_reset_cfg;	/* 0x2d0 APB1 Reset config */
	u32 reserved24;
	u32 apb2_reset_cfg;	/* 0x2d8 APB2 Reset config */
};

/* apb2 bit field */
#define APB2_CLK_SRC_OSC24M		1
#define APB2_FACTOR_M			0
#define APB2_FACTOR_N			0

#else

struct sunxi_ccm_reg {
	u32 pll1_cfg;		/* 0x00 pll1 control */
	u32 pll1_tun;		/* 0x04 pll1 tuning */
	u32 pll2_cfg;		/* 0x08 pll2 control */
	u32 pll2_tun;		/* 0x0c pll2 tuning */
	u32 pll3_cfg;		/* 0x10 pll3 control */
	u8 res0[0x4];
	u32 pll4_cfg;		/* 0x18 pll4 control */
	u8 res1[0x4];
	u32 pll5_cfg;		/* 0x20 pll5 control */
	u32 pll5_tun;		/* 0x24 pll5 tuning */
	u32 pll6_cfg;		/* 0x28 pll6 control */
	u32 pll6_tun;		/* 0x2c pll6 tuning */
	u32 pll7_cfg;		/* 0x30 pll7 control */
	u32 pll1_tun2;		/* 0x34 pll5 tuning2 */
	u8 res2[0x4];
	u32 pll5_tun2;		/* 0x3c pll5 tuning2 */
	u8 res3[0xc];
	u32 pll_lock_dbg;	/* 0x4c pll lock time debug */
	u32 osc24m_cfg;		/* 0x50 osc24m control */
	u32 cpu_ahb_apb0_cfg;	/* 0x54 cpu,ahb and apb0 divide ratio */
	u32 apb1_clk_div_cfg;	/* 0x58 apb1 clock dividor */
	u32 axi_gate;		/* 0x5c axi module clock gating */
	u32 ahb_gate0;		/* 0x60 ahb module clock gating 0 */
	u32 ahb_gate1;		/* 0x64 ahb module clock gating 1 */
	u32 apb0_gate;		/* 0x68 apb0 module clock gating */
	u32 apb1_gate;		/* 0x6c apb1 module clock gating */
	u8 res4[0x10];
	u32 nand_sclk_cfg;	/* 0x80 nand sub clock control */
	u32 ms_sclk_cfg;	/* 0x84 memory stick sub clock control */
	u32 sd0_clk_cfg;	/* 0x88 sd0 clock control */
	u32 sd1_clk_cfg;	/* 0x8c sd1 clock control */
	u32 sd2_clk_cfg;	/* 0x90 sd2 clock control */
	u32 sd3_clk_cfg;	/* 0x94 sd3 clock control */
	u32 ts_clk_cfg;		/* 0x98 transport stream clock control */
	u32 ss_clk_cfg;		/* 0x9c */
	u32 spi0_clk_cfg;	/* 0xa0 */
	u32 spi1_clk_cfg;	/* 0xa4 */
	u32 spi2_clk_cfg;	/* 0xa8 */
	u32 pata_clk_cfg;	/* 0xac */
	u32 ir0_clk_cfg;	/* 0xb0 */
	u32 ir1_clk_cfg;	/* 0xb4 */
	u32 iis_clk_cfg;	/* 0xb8 */
	u32 ac97_clk_cfg;	/* 0xbc */
	u32 spdif_clk_cfg;	/* 0xc0 */
	u32 keypad_clk_cfg;	/* 0xc4 */
	u32 sata_clk_cfg;	/* 0xc8 */
	u32 usb_clk_cfg;	/* 0xcc */
	u32 gps_clk_cfg;	/* 0xd0 */
	u32 spi3_clk_cfg;	/* 0xd4 */
	u8 res5[0x28];
	u32 dram_clk_cfg;	/* 0x100 */
	u32 be0_clk_cfg;	/* 0x104 */
	u32 be1_clk_cfg;	/* 0x108 */
	u32 fe0_clk_cfg;	/* 0x10c */
	u32 fe1_clk_cfg;	/* 0x110 */
	u32 mp_clk_cfg;		/* 0x114 */
	u32 lcd0_ch0_clk_cfg;	/* 0x118 */
	u32 lcd1_ch0_clk_cfg;	/* 0x11c */
	u32 csi_isp_clk_cfg;	/* 0x120 */
	u8 res6[0x4];
	u32 tvd_clk_reg;	/* 0x128 */
	u32 lcd0_ch1_clk_cfg;	/* 0x12c */
	u32 lcd1_ch1_clk_cfg;	/* 0x130 */
	u32 csi0_clk_cfg;	/* 0x134 */
	u32 csi1_clk_cfg;	/* 0x138 */
	u32 ve_clk_cfg;		/* 0x13c */
	u32 audio_codec_clk_cfg;	/* 0x140 */
	u32 avs_clk_cfg;	/* 0x144 */
	u32 ace_clk_cfg;	/* 0x148 */
	u32 lvds_clk_cfg;	/* 0x14c */
	u32 hdmi_clk_cfg;	/* 0x150 */
	u32 mali_clk_cfg;	/* 0x154 */
	u8 res7[0x4];
	u32 mbus_clk_cfg;	/* 0x15c */
};

/* apb1 bit field */
#define APB1_CLK_SRC_OSC24M		0
#define APB1_FACTOR_M			0
#define APB1_FACTOR_N			0

/* clock divide */
#define CPU_CLK_SRC_OSC24M		1
#define CPU_CLK_SRC_PLL1		2
#define AXI_DIV_1			0
#define AXI_DIV_2			1
#define AXI_DIV_3			2
#define AXI_DIV_4			3
#define AHB_DIV_1			0
#define AHB_DIV_2			1
#define AHB_DIV_4			2
#define AHB_DIV_8			3
#define APB0_DIV_1			0
#define APB0_DIV_2			1
#define APB0_DIV_4			2
#define APB0_DIV_8			3

#ifdef CONFIG_SUN5I
#define AHB_CLK_SRC_AXI			0
#endif

/* nand clock */
#define NAND_CLK_SRC_OSC24		0
#define NAND_CLK_DIV_N			0
#define NAND_CLK_DIV_M			0

/* gps clock */
#define GPS_SCLK_GATING_OFF		0
#define GPS_RESET			0

/* ahb clock gate bit offset */
#define AHB_GATE_OFFSET_GPS		26
#define AHB_GATE_OFFSET_SATA		25
#define AHB_GATE_OFFSET_PATA		24
#define AHB_GATE_OFFSET_SPI3		23
#define AHB_GATE_OFFSET_SPI2		22
#define AHB_GATE_OFFSET_SPI1		21
#define AHB_GATE_OFFSET_SPI0		20
#define AHB_GATE_OFFSET_TS0		18
#define AHB_GATE_OFFSET_EMAC		17
#define AHB_GATE_OFFSET_ACE		16
#define AHB_GATE_OFFSET_DLL		15
#define AHB_GATE_OFFSET_SDRAM		14
#define AHB_GATE_OFFSET_NAND		13
#define AHB_GATE_OFFSET_MS		12
#define AHB_GATE_OFFSET_MMC3		11
#define AHB_GATE_OFFSET_MMC2		10
#define AHB_GATE_OFFSET_MMC1		9
#define AHB_GATE_OFFSET_MMC0		8
#define AHB_GATE_OFFSET_BIST		7
#define AHB_GATE_OFFSET_DMA		6
#define AHB_GATE_OFFSET_SS		5
#define AHB_GATE_OFFSET_USB_OHCI1	4
#define AHB_GATE_OFFSET_USB_EHCI1	3
#define AHB_GATE_OFFSET_USB_OHCI0	2
#define AHB_GATE_OFFSET_USB_EHCI0	1
#define AHB_GATE_OFFSET_USB		0

#define CCM_AHB_GATE_GPS (0x1 << 26)
#define CCM_AHB_GATE_SDRAM (0x1 << 14)
#define CCM_AHB_GATE_DLL (0x1 << 15)
#define CCM_AHB_GATE_ACE (0x1 << 16)

#define CCM_PLL5_CTRL_M(n) (((n) & 0x3) << 0)
#define CCM_PLL5_CTRL_M_MASK CCM_PLL5_CTRL_M(0x3)
#define CCM_PLL5_CTRL_M_X(n) ((n) - 1)
#define CCM_PLL5_CTRL_M1(n) (((n) & 0x3) << 2)
#define CCM_PLL5_CTRL_M1_MASK CCM_PLL5_CTRL_M1(0x3)
#define CCM_PLL5_CTRL_M1_X(n) ((n) - 1)
#define CCM_PLL5_CTRL_K(n) (((n) & 0x3) << 4)
#define CCM_PLL5_CTRL_K_MASK CCM_PLL5_CTRL_K(0x3)
#define CCM_PLL5_CTRL_K_X(n) ((n) - 1)
#define CCM_PLL5_CTRL_LDO (0x1 << 7)
#define CCM_PLL5_CTRL_N(n) (((n) & 0x1f) << 8)
#define CCM_PLL5_CTRL_N_MASK CCM_PLL5_CTRL_N(0x1f)
#define CCM_PLL5_CTRL_N_X(n) (n)
#define CCM_PLL5_CTRL_P(n) (((n) & 0x3) << 16)
#define CCM_PLL5_CTRL_P_MASK CCM_PLL5_CTRL_P(0x3)
#define CCM_PLL5_CTRL_P_X(n) ((n) - 1)
#define CCM_PLL5_CTRL_BW (0x1 << 18)
#define CCM_PLL5_CTRL_VCO_GAIN (0x1 << 19)
#define CCM_PLL5_CTRL_BIAS(n) (((n) & 0x1f) << 20)
#define CCM_PLL5_CTRL_BIAS_MASK CCM_PLL5_CTRL_BIAS(0x1f)
#define CCM_PLL5_CTRL_BIAS_X(n) ((n) - 1)
#define CCM_PLL5_CTRL_VCO_BIAS (0x1 << 25)
#define CCM_PLL5_CTRL_DDR_CLK (0x1 << 29)
#define CCM_PLL5_CTRL_BYPASS (0x1 << 30)
#define CCM_PLL5_CTRL_EN (0x1 << 31)

#define CCM_GPS_CTRL_RESET (0x1 << 0)
#define CCM_GPS_CTRL_GATE (0x1 << 1)

#define CCM_DRAM_CTRL_DCLK_OUT (0x1 << 15)

#define CCM_MBUS_CTRL_M(n) (((n) & 0xf) << 0)
#define CCM_MBUS_CTRL_M_MASK CCM_MBUS_CTRL_M(0xf)
#define CCM_MBUS_CTRL_M_X(n) ((n) - 1)
#define CCM_MBUS_CTRL_N(n) (((n) & 0xf) << 16)
#define CCM_MBUS_CTRL_N_MASK CCM_MBUS_CTRL_N(0xf)
#define CCM_MBUS_CTRL_N_X(n) ((n) - 1)
#define CCM_MBUS_CTRL_CLK_SRC(n) (((n) & 0x3) << 24)
#define CCM_MBUS_CTRL_CLK_SRC_MASK CCM_MBUS_CTRL_CLK_SRC(0x3)
#define CCM_MBUS_CTRL_CLK_SRC_HOSC 0x0
#define CCM_MBUS_CTRL_CLK_SRC_PLL6 0x1
#define CCM_MBUS_CTRL_CLK_SRC_PLL5 0x2
#define CCM_MBUS_CTRL_GATE (0x1 << 31)

#endif /* CONFIG_SUN6I */

#ifndef __ASSEMBLY__
int clock_init(void);
int clock_twi_onoff(int port, int state);
void clock_set_pll1(int mhz);
unsigned int clock_get_pll5(void);
#endif

#endif /* _SUNXI_CLOCK_H */
