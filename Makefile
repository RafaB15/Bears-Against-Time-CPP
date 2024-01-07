CXX = g++
CXXFLAGS = -Wall -Wconversion -Werror

# List of source files (replace file.cpp file2.cpp ... filen.cpp with your actual filenames)
SOURCES = \
	game.cpp \
	personality_test.cpp \
	bears_against_time.cpp \
	map_elements/map_element.cpp \
	map_elements/chloe.cpp \
	map_elements/map_obstacles/map_obstacle.cpp \
	map_elements/map_obstacles/rock.cpp \
	map_elements/map_obstacles/tree.cpp \
	map_elements/map_obstacles/koala.cpp \
	map_elements/map_tools/map_tool.cpp \
	map_elements/player/player.cpp

# Name of the output executable
EXECUTABLE = game

# Target: all (default target, builds the executable) and deletes de .o generated afterwards, leaving only the executable
all: $(EXECUTABLE)
	rm -f $(SOURCES:.cpp=.o)

# Rule to link object files and create the executable
$(EXECUTABLE): $(SOURCES:.cpp=.o)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Rule to compile individual source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Target: clean (removes object files and the executable)
clean:
	rm -f $(SOURCES:.cpp=.o) $(EXECUTABLE)
