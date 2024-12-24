CC  = gcc
CXX = g++ -std=c++11 -fno-elide-constructors

CXXFLAGS = -std=c++11 -I inc -Wall -Wextra

TARGET = app
BUILD_DIR = build/
INC_DIR = include/

SOURCES = main.cc $(wildcard $(SRC_DIR)*.cpp)
OBJECTS = $(foreach SRC, $(SOURCES), $(basename $(BUILD_DIR)$(notdir $(SRC))).o)
DEPENDS = $(patsubst %.o, %.d, $(OBJECTS))

# .PHONY means these rules get executed even if
# files of those names exist.

all: dirs build

debug: CXXFLAGS += -D DEBUG -fsanitize=address -ggdb3
debug: clean build

build: $(TARGET)

.PHONY: clean dirs

dirs:
	@ mkdir -p $(BUILD_DIR)
	@ mkdir -p $(INC_DIR)

clean:
	$(RM) $(OBJECTS) $(DEPENDS) $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $(BUILD_DIR)$@

-include $(DEPENDS)

$(BUILD_DIR)main.o: main.cc
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@
