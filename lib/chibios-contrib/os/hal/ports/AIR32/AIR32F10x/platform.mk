# Required platform files.
PLATFORMSRC_CONTRIB += $(CHIBIOS)/os/hal/ports/common/ARMCMx/nvic.c     \
              $(CHIBIOS_CONTRIB)/os/hal/ports/AIR32/AIR32F10x/hal_lld.c \
			   $(CHIBIOS_CONTRIB)/os/hal/ports/AIR32/AIR32F10x/air32_isr.c    \
         $(CHIBIOS_CONTRIB)/os/hal/ports/AIR32/AIR32F10x/hal_efl_lld.c

# Required include directories.
PLATFORMINC_CONTRIB += $(CHIBIOS)/os/hal/ports/common/ARMCMx \
               $(CHIBIOS_CONTRIB)/os/hal/ports/AIR32/AIR32F10x


ifeq ($(USE_SMART_BUILD),yes)

# Configuration files directory
ifeq ($(HALCONFDIR),)
  ifeq ($(CONFDIR),)
    HALCONFDIR = .
  else
    HALCONFDIR := $(CONFDIR)
  endif
endif

HALCONF := $(strip $(shell cat $(HALCONFDIR)/halconf.h | egrep -e "\#define"))

ifneq ($(findstring HAL_USE_ADC TRUE,$(HALCONF)),)
PLATFORMSRC_CONTRIB += $(CHIBIOS_CONTRIB)/os/hal/ports/AIR32/AIR32F10x/hal_adc_lld.c
endif
else
PLATFORMSRC_CONTRIB += $(CHIBIOS_CONTRIB)/os/hal/ports/AIR32/AIR32F10x/hal_adc_lld.c
endif

# Drivers compatible with the platform.
include ${CHIBIOS_CONTRIB}/os/hal/ports/AIR32/LLD/GPIOv1/driver.mk
include $(CHIBIOS_CONTRIB)/os/hal/ports/AIR32/LLD/DMAv1/driver.mk
include $(CHIBIOS_CONTRIB)/os/hal/ports/AIR32/LLD/TIMv1/driver.mk
include $(CHIBIOS_CONTRIB)/os/hal/ports/AIR32/LLD/I2Cv1/driver.mk
include $(CHIBIOS_CONTRIB)/os/hal/ports/AIR32/LLD/USBv1/driver.mk
include $(CHIBIOS_CONTRIB)/os/hal/ports/AIR32/LLD/USARTv1/driver.mk

# Shared variables
ALLCSRC += $(PLATFORMSRC_CONTRIB)
ALLINC  += $(PLATFORMINC_CONTRIB)
