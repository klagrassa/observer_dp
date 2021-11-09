CXX=g++
LD=g++
CXXFLAGS=-Wall -std=c++17 -g

PRJ_DIR = $(realpath $(CURDIR)/..)
EXE_DIR = bin
SRC_DIR = src
BUILD_DIR= build

SRC=$(wildcard $(SRC_DIR)/*.cpp)
OBJ:= $(patsubst src/%.cpp,build/%.o,$(SRC))
INCLUDES=$(addprefix -I,$(SRC_DIR))

vpath %.cpp $(SRC_DIR)

define make-goal
$1/%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $$< -o $$@
endef

.PHONY: all checkdirs clean

all: checkdirs $(EXE_DIR)/app

$(EXE_DIR)/app: $(OBJ)
	$(LD) $^ -o $@

checkdirs: $(BUILD_DIR) $(EXE_DIR)

$(BUILD_DIR):
	@mkdir -p $@

$(EXE_DIR):
	@mkdir -p $@

clean:
	@rm -rf $(BUILD_DIR) $(EXE_DIR)


$(foreach bdir,$(BUILD_DIR),$(eval $(call make-goal,$(bdir))))