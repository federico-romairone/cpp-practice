# Makefile for C++ Practice Exercises

CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

# Directories
EXERCISE_DIRS = exercises/01_hello_world exercises/02_variables exercises/03_control_flow exercises/04_functions

# Output directory
BUILD_DIR = build

# Source files
HELLO_WORLD_SRC = exercises/01_hello_world/hello_world.cpp
VARIABLES_SRC = exercises/02_variables/variables.cpp
CONTROL_FLOW_SRC = exercises/03_control_flow/control_flow.cpp
FUNCTIONS_SRC = exercises/04_functions/functions.cpp

# Output binaries
HELLO_WORLD_BIN = $(BUILD_DIR)/hello_world
VARIABLES_BIN = $(BUILD_DIR)/variables
CONTROL_FLOW_BIN = $(BUILD_DIR)/control_flow
FUNCTIONS_BIN = $(BUILD_DIR)/functions

# All targets
ALL_BINS = $(HELLO_WORLD_BIN) $(VARIABLES_BIN) $(CONTROL_FLOW_BIN) $(FUNCTIONS_BIN)

.PHONY: all clean run-all

all: $(BUILD_DIR) $(ALL_BINS)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(HELLO_WORLD_BIN): $(HELLO_WORLD_SRC)
	$(CXX) $(CXXFLAGS) $< -o $@

$(VARIABLES_BIN): $(VARIABLES_SRC)
	$(CXX) $(CXXFLAGS) $< -o $@

$(CONTROL_FLOW_BIN): $(CONTROL_FLOW_SRC)
	$(CXX) $(CXXFLAGS) $< -o $@

$(FUNCTIONS_BIN): $(FUNCTIONS_SRC)
	$(CXX) $(CXXFLAGS) $< -o $@

run-all: all
	@echo "=== Running Hello World ==="
	@$(HELLO_WORLD_BIN)
	@echo ""
	@echo "=== Running Variables ==="
	@$(VARIABLES_BIN)
	@echo ""
	@echo "=== Running Control Flow ==="
	@$(CONTROL_FLOW_BIN)
	@echo ""
	@echo "=== Running Functions ==="
	@$(FUNCTIONS_BIN)

clean:
	rm -rf $(BUILD_DIR)
