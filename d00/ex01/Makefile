NAME=phonebook
CXX=clang++
RM=rm -f
CPPFLAGS=-g -Wall -Wextra -Werror
LDFLAGS=-g
LDLIBS=

SRCS=phonebook.cpp C_contact.cpp C_contacts.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: tool

tool: $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) $(LDLIBS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)