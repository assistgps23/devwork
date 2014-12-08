where-am-i = $(CURDIR)/$(word $(words $(MAKEFILE_LIST)),$(MAKEFILE_LIST))
$(info $(where-am-i))
current_path = $(patsubst %/build/subdir.mk,%,$(where-am-i))
src_path = $(current_path)/src
inc_path = $(current_path)/inc
build_path = $(current_path)/build
obj_path = $(current_path)/build
$(info $(current_path))
$(info $(src_path))
$(info $(build_path))
#THIS_MAKEFILE := $(call where-am-i)
CPP_FILES := $(wildcard $(src_path)/*.cpp)
OBJ_FILES += $(addprefix $(build_path)/,$(notdir $(CPP_FILES:.cpp=.o)))
$(info $(CPP_FILES))
$(info $(CPP_FILES))
LDFLAGS = -lm `pkg-config --cflags gtk+-2.0` `pkg-config --libs gtk+-2.0`
#OBJS = OBJ_FILES
#$(COMPONENT_OBJ)/externalinterface.o
INC_PATH += -I$(inc_path)
DIR =local/aaaaa/assistgps/client_handler/inc
$(build_path)%.o: $(src_path)%.cpp
	g++ -g $(INC_PATH) -c $< -o $@
