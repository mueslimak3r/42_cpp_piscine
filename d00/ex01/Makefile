NAME=phonebook
CXX=clang++
RM=rm -f
CPPFLAGS=-Wall -Wextra -Werror
LDFLAGS=
LDLIBS=

SRCS=phonebook.cpp C_contact.cpp C_contacts.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) $(LDLIBS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)