################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Utility/cpp/ShaderLoader.cpp \
../Utility/cpp/fileLoader.cpp \
../Utility/cpp/mMathTools.cpp 

OBJS += \
./Utility/cpp/ShaderLoader.o \
./Utility/cpp/fileLoader.o \
./Utility/cpp/mMathTools.o 

CPP_DEPS += \
./Utility/cpp/ShaderLoader.d \
./Utility/cpp/fileLoader.d \
./Utility/cpp/mMathTools.d 


# Each subdirectory must supply rules for building sources it contributes
Utility/cpp/%.o: ../Utility/cpp/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/nfs/ug/homes-5/r/renfeiyu/OpenGLTest/assimp" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


