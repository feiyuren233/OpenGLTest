################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Utility/cpp/ShaderLoader.cpp \
../Utility/cpp/Texture.cpp \
../Utility/cpp/fileLoader.cpp \
../Utility/cpp/mMathTools.cpp \
../Utility/cpp/mesh.cpp 

OBJS += \
./Utility/cpp/ShaderLoader.o \
./Utility/cpp/Texture.o \
./Utility/cpp/fileLoader.o \
./Utility/cpp/mMathTools.o \
./Utility/cpp/mesh.o 

CPP_DEPS += \
./Utility/cpp/ShaderLoader.d \
./Utility/cpp/Texture.d \
./Utility/cpp/fileLoader.d \
./Utility/cpp/mMathTools.d \
./Utility/cpp/mesh.d 


# Each subdirectory must supply rules for building sources it contributes
Utility/cpp/%.o: ../Utility/cpp/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/nfs/ug/homes-5/r/renfeiyu/OpenGLTest/Includes" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


