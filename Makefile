CXX := $(shell command -v clang++ >/dev/null 2>&1 && echo clang++ || echo g++)

CXXFLAGS = -std=c++20 -Wall -Wextra -O2

DIRS := $(wildcard */)

all: $(DIRS)

$(DIRS):
	mkdir -p $@bin
	$(CXX) $(CXXFLAGS) $@*.cpp -o $@bin/$(notdir $(patsubst %/,%,$@))

clean:
	rm -f $(foreach dir, $(DIRS), $(dir)bin/$(notdir $(patsubst %/,%,$dir)))

.PHONY: all clean $(DIRS)
