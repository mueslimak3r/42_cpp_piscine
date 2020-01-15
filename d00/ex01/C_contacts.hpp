#ifndef C_CONTACTS_HPP
#define C_CONTACTS_HPP

#include "C_contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

class C_contacts {
	int size, used;
	C_contact contacts[8];

  public:
	C_contacts() : size(8), used(0) { }
	int add_contact ();
	int search ();
};

#endif