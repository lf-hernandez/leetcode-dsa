CXX = clang++
CXXFLAGS = -std=c++20 -Wall -Wextra -O2

DIRS = 1_two_sum

all: $(DIRS)

$(DIRS):
	mkdir -p $@/bin 
	$(CXX) $(CXXFLAGS) $@/*.cpp -o $@/bin/$@

clean:
	rm -f $(foreach dir, $(DIRS), $(dir)/$(dir))

.PHONY: all clean $(DIRS)

