CXX = g++
CXXFLAGS = -Wall -Wconversion -Werror

# Use wildcard to get all .cpp files in the current directory
SOURCES = $(wildcard *.cpp)

# Use wildcard to get all .cpp files in map_elements directory
SOURCES += $(wildcard map_elements/*.cpp)

# Use wildcard to get all .cpp files in map_obstacles directory
SOURCES += $(wildcard map_elements/map_obstacles/*.cpp)

# Use wildcard to get all .cpp files in map_tools directory
SOURCES += $(wildcard map_elements/map_tools/*.cpp)

# Use wildcard to get all .cpp files in player directory
SOURCES += $(wildcard player/*.cpp)

# Use wildcard to get all .cpp files in player_tools directory
SOURCES += $(wildcard player_tools/*.cpp)

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
