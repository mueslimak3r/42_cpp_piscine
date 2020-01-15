#ifndef C_CONTACT_HPP
#define C_CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class	C_contact {
	std::string attributes[11];

  public:
  	int empty, attr_amt, index;
	C_contact() : empty(1), attr_amt(11), index(-1) { }
	int print_small ();
	int print_full ();
	int add_attribute (int);
};

#endif