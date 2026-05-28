/* Copyright 2020 QMK
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include_next <mcuconf.h>

#undef AT32_PWM_USE_TMR1
#define AT32_PWM_USE_TMR1 FALSE

#undef AT32_USB_USE_OTG1
#define AT32_USB_USE_OTG1 FALSE

#undef AT32_USB_USE_OTG2
#define AT32_USB_USE_OTG2 TRUE

#undef AT32_USE_USB_OTG2_HS
#define AT32_USE_USB_OTG2_HS TRUE

#undef AT32_SPI_USE_SPI1
#define AT32_SPI_USE_SPI1             TRUE

#undef AT32_SPI_SPI1_RX_DMA_STREAM
#define AT32_SPI_SPI1_RX_DMA_STREAM AT32_DMA_STREAM_ID(1, 1)

#undef AT32_SPI_SPI1_TX_DMA_STREAM
#define AT32_SPI_SPI1_TX_DMA_STREAM AT32_DMA_STREAM_ID(1, 2)