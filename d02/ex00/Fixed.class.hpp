#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class   Fixed
{
    public:
        Fixed ();
        Fixed (const Fixed &fixed);
        Fixed & operator = (const Fixed &fixed)
        {
            if (this != &fixed)
            {
                value = fixed.value;
            }
            return (*this);
        }
        ~Fixed();
        int                 getRawBits(void) const;
        void                setRawBits(int const raw);

    private:
        int                 value;
        static const int    size;
};

#endif