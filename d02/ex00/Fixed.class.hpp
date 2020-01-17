#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class   Fixed
{
    public:
        Fixed ();
        Fixed (const Fixed &fixed);
        Fixed & operator = (const Fixed &fixed);
        ~Fixed();
        int                 getRawBits(void) const;
        void                setRawBits(int const raw);

    private:
        int                 value;
        static const int    size = 8;
};

#endif