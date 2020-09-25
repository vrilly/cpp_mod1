SRCS = main.cpp ReplaceMachine.cpp
HDRS = ReplaceMachine.hpp
CXXFLAGS = -Wall -Wextra -Werror
OBJS := $(SRCS:.c=.o)
all: replace
replace: $(OBJS)
	@$(CXX) $(CXXFLAGS) -o $@ $^
