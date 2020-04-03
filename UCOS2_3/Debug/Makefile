################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
LIB_AS_ARGS :=
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
HEX_FLASH_FILE_PATH :=
HEX_FLASH_FILE_PATH_AS_ARGS :=
HEX_EEPROM_FILE_PATH :=
HEX_EEPROM_FILE_PATH_AS_ARGS :=
LSS_FILE_PATH :=
LSS_FILE_PATH_AS_ARGS :=
MAP_FILE_PATH :=
MAP_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=C:/Program Files (x86)/Atmel/AVR Studio 5.0/AVR ToolChain/bin/
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS := 


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../bsp.c \
../main.c \
../os_core.c \
../os_cpu_c.c \
../os_dbg_r.c \
../os_flag.c \
../os_mbox.c \
../os_mem.c \
../os_mutex.c \
../os_q.c \
../os_sem.c \
../os_task.c \
../os_time.c \
../os_tmr.c \
../ucos_ii.c


PREPROCESSING_SRCS +=  \
../os_cpu_a.s


ASM_SRCS += 


OBJS +=  \
bsp.o \
main.o \
os_core.o \
os_cpu_a.o \
os_cpu_c.o \
os_dbg_r.o \
os_flag.o \
os_mbox.o \
os_mem.o \
os_mutex.o \
os_q.o \
os_sem.o \
os_task.o \
os_time.o \
os_tmr.o \
ucos_ii.o


OBJS_AS_ARGS +=  \
bsp.o \
main.o \
os_core.o \
os_cpu_a.o \
os_cpu_c.o \
os_dbg_r.o \
os_flag.o \
os_mbox.o \
os_mem.o \
os_mutex.o \
os_q.o \
os_sem.o \
os_task.o \
os_time.o \
os_tmr.o \
ucos_ii.o


C_DEPS +=  \
bsp.d \
main.d \
os_core.d \
os_cpu_c.d \
os_dbg_r.d \
os_flag.d \
os_mbox.d \
os_mem.d \
os_mutex.d \
os_q.d \
os_sem.d \
os_task.d \
os_time.d \
os_tmr.d \
ucos_ii.d


C_DEPS_AS_ARGS +=  \
bsp.d \
main.d \
os_core.d \
os_cpu_c.d \
os_dbg_r.d \
os_flag.d \
os_mbox.d \
os_mem.d \
os_mutex.d \
os_q.d \
os_sem.d \
os_task.d \
os_time.d \
os_tmr.d \
ucos_ii.d


OUTPUT_FILE_PATH +=UCOS2_3.elf

OUTPUT_FILE_PATH_AS_ARGS +=UCOS2_3.elf

HEX_FLASH_FILE_PATH +=UCOS2_3.hex

HEX_FLASH_FILE_PATH_AS_ARGS +=UCOS2_3.hex

HEX_EEPROM_FILE_PATH +=UCOS2_3.eep

HEX_EEPROM_FILE_PATH_AS_ARGS +=UCOS2_3.eep

LSS_FILE_PATH +=UCOS2_3.lss

LSS_FILE_PATH_AS_ARGS +=UCOS2_3.lss

MAP_FILE_PATH =UCOS2_3.map

MAP_FILE_PATH_AS_ARGS =UCOS2_3.map

LIB_AS_ARGS +=libUCOS2_3.a

ADDITIONAL_DEPENDENCIES:= $(HEX_FLASH_FILE_PATH) $(LSS_FILE_PATH) $(HEX_EEPROM_FILE_PATH) size

OUTPUT_FILE_DEP:= ./makedep.mk

# AVR/GNU C Compiler































./%.o: .././%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler
	$(QUOTE)$(AVR_APP_PATH)avr-gcc.exe$(QUOTE) -funsigned-char -funsigned-bitfields -O0 -fpack-struct -fshort-enums -g2 -Wall -c -std=gnu99  -mmcu=atmega128   -MD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo Finished building: $<



# AVR/GNU Assembler

./%.o: .././%.s
	@echo Building file: $<
	@echo Invoking: AVR/GNU Assembler
	$(QUOTE)$(AVR_APP_PATH)avr-gcc.exe$(QUOTE) -Wa,-gdwarf2 -x assembler-with-cpp -c  -mmcu=atmega128   -o"$@" "$<"
	@echo Finished building: $<




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

# AVR/GNU C/C++ Linker
$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU C/C++ Linker
	$(QUOTE)$(AVR_APP_PATH)avr-gcc.exe$(QUOTE)  -mmcu=atmega128  -Wl,-Map=$(MAP_FILE_PATH_AS_ARGS) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS)
	@echo Finished building target: $@



$(HEX_FLASH_FILE_PATH): $(OUTPUT_FILE_PATH)
	$(QUOTE)$(AVR_APP_PATH)avr-objcopy.exe$(QUOTE) -O ihex -R .eeprom -R .fuse -R .lock -R .signature  $(QUOTE)$<$(QUOTE) $(QUOTE)$@$(QUOTE)

$(HEX_EEPROM_FILE_PATH): $(OUTPUT_FILE_PATH)
	-$(QUOTE)$(AVR_APP_PATH)avr-objcopy.exe$(QUOTE) -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0 --no-change-warnings -O ihex $(QUOTE)$<$(QUOTE) $(QUOTE)$@$(QUOTE) || exit 0

$(LSS_FILE_PATH): $(OUTPUT_FILE_PATH)
	$(QUOTE)$(AVR_APP_PATH)avr-objdump.exe$(QUOTE) -h -S $(QUOTE)$<$(QUOTE) > $(QUOTE)$@$(QUOTE)

size: $(OUTPUT_FILE_PATH)
	@$(QUOTE)$(AVR_APP_PATH)avr-size.exe$(QUOTE) -C --mcu=atmega128 $(OUTPUT_FILE_PATH_AS_ARGS)

# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS)$(C_DEPS_AS_ARGS) $(EXECUTABLES) $(LIB_AS_ARGS) $(HEX_FLASH_FILE_PATH_AS_ARGS) $(HEX_EEPROM_FILE_PATH_AS_ARGS) $(LSS_FILE_PATH_AS_ARGS) $(MAP_FILE_PATH_AS_ARGS)

