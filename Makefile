CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I./include
LDFLAGS = -lCatch2Main -lCatch2
DEPFLAGS = -MMD -MP

TARGET = unittest
SRCS = $(wildcard src/*/*.cpp)
SRCS += $(wildcard tests/*.cpp)
OBJS = $(SRCS:.cpp=.o)
DEPS = $(OBJS:.o=.d)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(LDFLAGS) -o $@

-include $(DEPS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS) $(DEPS)

test: $(TARGET)
	./$(TARGET)

.PHONY: clean test help
