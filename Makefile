CXX = clang++
CXXFLAGS = -std=c++20 -Wall -Wextra -O2

DIRS = 1_two_sum

all: $(DIRS)

$(DIRS):
	$(CXX) $(CXXFLAGS) $@/*.cpp -o $@/$@

clean:
	rm -f $(foreach dir, $(DIRS), $(dir)/$(dir))

.PHONY: all clean $(DIRS)

