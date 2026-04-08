#include "Fixed.hpp"

const int Fixed::_bit = 8;

Fixed::Fixed() : _number(0) {}
Fixed::Fixed(const int raw) { this->_number = raw << this->_bit; }
Fixed::Fixed(const float raw) { this->_number = roundf(raw * (1 << this->_bit)); }
Fixed::~Fixed() {}
Fixed::Fixed(const Fixed &obj) { this->_number = obj.getRawBits(); }

Fixed& Fixed::operator=(const Fixed &obj)
{
	if (this != &obj)
	{
		this->_number = obj.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits(void) const { return this->_number; }
void Fixed::setRawBits(int const raw) { this->_number = raw; }
float Fixed::toFloat(void) const { return this->_number / (float)(1 << this->_bit); }
int Fixed::toInt(void) const { return this->_number >> this->_bit; }

std::ostream & operator<<(std::ostream & cout, const Fixed & objs)
{
	cout << objs.toFloat();
	return (cout);
}

bool Fixed::operator<(const Fixed & obj) const { return this->_number < obj._number; }
bool Fixed::operator>(const Fixed & obj) const { return this->_number > obj._number; }
bool Fixed::operator<=(const Fixed & obj) const { return this->_number <= obj._number; }
bool Fixed::operator>=(const Fixed & obj) const { return this->_number >= obj._number; }
bool Fixed::operator==(const Fixed & obj) const { return this->_number == obj._number; }
bool Fixed::operator!=(const Fixed & obj) const { return this->_number != obj._number; }

Fixed Fixed::operator+(const Fixed & obj) const
{
	Fixed ret(this->toFloat() + obj.toFloat());
	return ret;
}
Fixed Fixed::operator-(const Fixed & obj) const
{
	Fixed ret(this->toFloat() - obj.toFloat());
	return ret;
}
Fixed Fixed::operator*(const Fixed & obj) const
{
	Fixed ret(this->toFloat() * obj.toFloat());
	return ret;
}
Fixed Fixed::operator/(const Fixed & obj) const
{
	Fixed ret(this->toFloat() / obj.toFloat());
	return ret;
}
Fixed& Fixed::operator++(void)
{
	this->_number++;
	return (*this);
}
Fixed& Fixed::operator--(void)
{
	this->_number--;
	return (*this);
}
const Fixed Fixed::operator++(int)
{
	const Fixed ret(*this);
	this->_number++;
	return ret;

}
const Fixed Fixed::operator--(int)
{
	const Fixed ret(*this);
	this->_number--;
	return ret;
}
Fixed& Fixed::max(Fixed & fix1, Fixed & fix2)
{
	if (fix1 >= fix2)
		return (fix1);
	return (fix2);
}
Fixed& Fixed::min(Fixed & fix1, Fixed & fix2)
{
	if (fix1 <= fix2)
		return (fix1);
	return (fix2);
}
const Fixed& Fixed::max(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1 >= fix2)
		return (fix1);
	return (fix2);
}
const Fixed& Fixed::min(const Fixed &fix1, const Fixed &fix2)
{
	if (fix1 <= fix2)
		return (fix1);
	return (fix2);
}
