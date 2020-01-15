CXX=g++
RM=rm -f
CPPFLAGS=-g -Wall -Wextra -Werror
LDFLAGS=-g
LDLIBS=

SRCS=megaphone.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: tool

tool: $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) $(LDLIBS) -o megaphone

#tool.o: tool.cc support.hh

#support.o: support.hh support.cc

clean:
	$(RM) $(OBJS)