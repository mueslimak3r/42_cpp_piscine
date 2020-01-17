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

static float ft_pow(float base, float power)
{
    float ret = base;
    for (int p = power; p > 1; p--)
        ret *= base;
    return (ret);
}

Fixed::Fixed (const int val)
{
    std::cout << "int constructor called\n";
    value = val * ft_pow(2, fractional_bits);
}

Fixed::Fixed (const float flt)
{
    std::cout << "float constructor called\n";
    double x =  flt * ft_pow(2, fractional_bits);
    value = static_cast<int>(roundf(x));    
}

Fixed::Fixed (const Fixed &fixed)
{
    std::cout << "copy constructor called\n";
    value = fixed.value;
}

Fixed           &Fixed::operator= (const Fixed &fixed)
{
    std::cout << "assignation op called\n";
    if (this != &fixed)
    {
        value = fixed.value;
    }
    return (*this);
}

std::ostream    &operator<< (std::ostream &out, const Fixed &fixed)
{
    out << std::setprecision(8) << fixed.toFloat() << '\n';
    return (out);
}

float           Fixed::toFloat(void) const
{
    return ((float)value / (float)(1 << fractional_bits));
}

int             Fixed::toInt(void) const
{
    return (roundf((float)value / (float)(1 << fractional_bits)));
}

int             Fixed::getRawBits(void) const
{
    return (value);
}

void            Fixed::setRawBits(int const raw)
{
    value = raw;
}