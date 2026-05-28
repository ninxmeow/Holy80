# SRC += eikkay65.c

MCU_LDSCRIPT  = AT32F405xC_uf2

OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

QMK_USB_SUPPORT_HS = yes

# DEBUG_MATRIX_SCAN_RATE_ENABLE = yes

# DEBOUNCE_TYPE = sym_eager_pk

SRC += at32f402_405_adc.c
SRC += at32f402_405_crm.c
SRC += at32f402_405_dma.c
SRC += at32f402_405_gpio.c
SRC += at32f402_405_misc.c
SRC += at32f402_405_usart.c
SRC += debug_uart.c
