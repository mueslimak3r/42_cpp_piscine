#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <math.h>

class   Fixed
{
    public:
        Fixed ();
        Fixed (const int);
        Fixed (const float);
        Fixed (const Fixed &fixed);
        ~Fixed();
        Fixed               &operator = (const Fixed &fixed);
        float               toFloat( void ) const;
        int                 toInt( void ) const;
        int                 getRawBits(void) const;
        void                setRawBits(int const raw);

    private:
        int                 value;
        static const int    fractional_bits = 8;
};

std::ostream        &operator << (std::ostream &out, const Fixed &fixed);

#endif