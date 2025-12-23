CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -I./src/cli -I./src/net -I./src/pkg -I./src/util -I./src/fs

SRC_DIRS = src/cli src/net src/pkg src/util src/fs src
BUILD_DIR = build
BIN_DIR = bin

TARGET = $(BIN_DIR)/neo

SRCS = $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.cpp))
OBJS = $(patsubst %.cpp,$(BUILD_DIR)/%.o,$(SRCS))

all: $(TARGET)

$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)


$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: all clean

