CPP_FILES := $(wildcard $(COMPONENT_SRC)/*.cpp)
OBJ_FILES := $(addprefix $(COMPONENT_OBJ)/,$(notdir $(CPP_FILES:.cpp=.o)))
CPP_DEPS := $(addprefix $(COMPONENT_OBJ)/,$(notdir $(CPP_FILES:.cpp=.d)))
$(info $(OBJ_FILES))
$(info $(CPP_FILES))
LDFLAGS = -lm `pkg-config --cflags gtk+-2.0` `pkg-config --libs gtk+-2.0`
#OBJS = OBJ_FILES
#$(COMPONENT_OBJ)/externalinterface.o
DIR =local/aaaaa/assistgps/client_handler/inc
$(COMPONENT_OBJ)%.o: $(COMPONENT_SRC)%.cpp
	g++ -g -I$(COMPONENT_INC) -c $< -o $@
