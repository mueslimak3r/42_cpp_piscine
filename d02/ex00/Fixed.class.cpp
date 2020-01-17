#include "Fixed.class.hpp"

Fixed::~Fixed()
{
    std::cout << "destructor called\n";
}

Fixed::Fixed()
{
    std::cout << "default constructor called\n";
    value = 0; 
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "copy constructor called\n";
    value = fixed.value;
}

Fixed   &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "assignation overload called\n";
    if (this != &fixed)
    {
        value = fixed.value;
    }
    return (*this);
}

int                 Fixed::getRawBits(void) const
{
    return (value);
}

void                Fixed::setRawBits(int const raw)
{
    value = raw;
}