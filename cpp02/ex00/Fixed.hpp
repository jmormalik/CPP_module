#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	_number;
		static const int _bit;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &obj);
		Fixed& operator=(const Fixed &obj);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif