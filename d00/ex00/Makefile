NAME=megaphone
CXX=g++
RM=rm -f
CPPFLAGS=-Wall -Wextra -Werror
LDFLAGS=
LDLIBS=

SRCS=megaphone.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) $(LDLIBS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)