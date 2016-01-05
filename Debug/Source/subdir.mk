################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Source/RenderScene.cpp \
../Source/initWindow.cpp \
../Source/main.cpp 

OBJS += \
./Source/RenderScene.o \
./Source/initWindow.o \
./Source/main.o 

CPP_DEPS += \
./Source/RenderScene.d \
./Source/initWindow.d \
./Source/main.d 


# Each subdirectory must supply rules for building sources it contributes
Source/%.o: ../Source/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/nfs/ug/homes-5/r/renfeiyu/OpenGLTest/assimp" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


