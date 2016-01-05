################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Game/GameObj.cpp \
../Game/GameObjComponents.cpp \
../Game/Rotation.cpp \
../Game/Transform.cpp 

OBJS += \
./Game/GameObj.o \
./Game/GameObjComponents.o \
./Game/Rotation.o \
./Game/Transform.o 

CPP_DEPS += \
./Game/GameObj.d \
./Game/GameObjComponents.d \
./Game/Rotation.d \
./Game/Transform.d 


# Each subdirectory must supply rules for building sources it contributes
Game/%.o: ../Game/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/nfs/ug/homes-5/r/renfeiyu/OpenGLTest/assimp" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


