################################################################################
# Automatically-generated file. Do not edit!
# ################################################################################
#
# #-include ../makefile.init
#
TOP := $(dir $(lastword $(MAKEFILE_LIST)))
COMPONENT_DIR := $(TOP)/client_handler
COMPONENT_INC := $(COMPONENT_DIR)/inc
COMPONENT_SRC := $(COMPONENT_DIR)/src
COMPONENT_BUILD := $(COMPONENT_DIR)/build
COMPONENT_OBJ := $(COMPONENT_BUILD)
RM := rm
#
# # All of the sources participating in the build are defined here
include client_handler/build/subdir.mk
#
#
#
SRC_FILE=$(TOP)/assistgps.cpp
#SRC_FILE=/local/aaaaa/assistgps1/assistgps.cpp
#$(info $(SRC_FILE))
#  # Add inputs and outputs from these tool invocations to the build variables
# All Target
all:assistgps_full
assistgps_full:$(OBJ_FILES)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	g++ -o "assistgps2" $(OBJ_FILES) -I$(COMPONENT_INC) $(SRC_FILE)
	@echo 'Finished building target: $@'
	@echo ' '
clean:
	-$(RM) $(OBJS_FILES)
	-@echo ' '
.PHONY: all clean dependents
.SECONDARY:
-include ../makefile.targets

