#include "C_contacts.hpp"

int		C_contacts::add_contact (void)
{
	if (used < size)
	{
		for (int i = 0; i < contacts[used].attr_amt; i++)
			contacts[used].add_attribute(i);
		contacts[used].empty = 0;
		contacts[used].index = used;
		used++;
		return (1);
	}
	else
		std::cout << "too many contacts\n";
	return (0);
}

int		C_contacts::search (void)
{
	std::cout << std::right << std::setw(11) << "index";
	std::cout << std::right << std::setw(11) << "first n";
	std::cout << std::right << std::setw(11) << "last n";
	std::cout << std::right << std::setw(11) << "nickname";
	std::cout << "\n";
	for (int i = 0; i < size; i++)
	{
		if (!contacts[i].empty)
			contacts[i].print_small();
	}
	std::cout << "select entry index: ";
	std::string input;
	std::getline(std::cin, input);
	std::stringstream input_stream(input);
	int index = 0;
	input_stream >> index;
	if (index < size && !contacts[index].empty)
		contacts[index].print_full();
	else
		std::cout << "invalid\n";
	return (0);
}