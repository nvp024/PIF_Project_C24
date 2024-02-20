################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../libs_pif/lcd_i2c.c 

OBJS += \
./libs_pif/lcd_i2c.o 

C_DEPS += \
./libs_pif/lcd_i2c.d 


# Each subdirectory must supply rules for building sources it contributes
libs_pif/%.o libs_pif/%.su libs_pif/%.cyclo: ../libs_pif/%.c libs_pif/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/HP PAVILION/Documents/STM32CubeIDE/workspace_1.13.2/PIF/libs_pif" -O0 -ffunction-sections -fdata-sections -Wall -u_printf_float -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-libs_pif

clean-libs_pif:
	-$(RM) ./libs_pif/lcd_i2c.cyclo ./libs_pif/lcd_i2c.d ./libs_pif/lcd_i2c.o ./libs_pif/lcd_i2c.su

.PHONY: clean-libs_pif

