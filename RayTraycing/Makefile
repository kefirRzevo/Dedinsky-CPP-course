CXX = g++
TARGET = app
BUILD_DIR = build

make:
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -Ofast -c -o $(BUILD_DIR)/main.o main.cc
	$(CXX) $(CXXFLAGS) -Ofast -c -o $(BUILD_DIR)/render.o src/render.cc
	$(CXX) -o $(BUILD_DIR)/$(TARGET) $(BUILD_DIR)/main.o $(BUILD_DIR)/render.o -lsfml-graphics -lsfml-window -lsfml-system
	./$(BUILD_DIR)/$(TARGET)

clean:
	rm -rf $(BUILD_DIR)
