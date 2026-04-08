#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_number;
		static const int _bit;
	public:
		Fixed();
		Fixed(const int raw);
		Fixed(const float raw);
		~Fixed();
		Fixed(const Fixed &obj);
		Fixed& operator=(const Fixed &obj);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream &cout, const Fixed& objs);

#endif