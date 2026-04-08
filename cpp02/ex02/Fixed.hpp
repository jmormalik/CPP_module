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
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		bool operator>(const Fixed &obj) const;
		bool operator<(const Fixed &obj) const;
		bool operator>=(const Fixed &obj) const;
		bool operator<=(const Fixed &obj) const;
		bool operator==(const Fixed &obj) const;
		bool operator!=(const Fixed &obj) const;
		Fixed& operator=(const Fixed &obj);
		Fixed operator+(const Fixed &obj) const;
		Fixed operator-(const Fixed &obj) const;
		Fixed operator*(const Fixed &obj) const;
		Fixed operator/(const Fixed &obj) const;
		Fixed& operator++(void);
		Fixed& operator--(void);
		const Fixed operator++(int);
		const Fixed operator--(int);
		static Fixed& min(Fixed &fix1, Fixed &fix2);
		static Fixed& max(Fixed &fix1, Fixed &fix2);
		static const Fixed& max(const Fixed &fix1, const Fixed &fix2);
		static const Fixed& min(const Fixed &fix1, const Fixed &fix2);
};

std::ostream& operator<<(std::ostream &cout, const Fixed& objs);

#endif