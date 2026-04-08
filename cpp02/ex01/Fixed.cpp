#include "Fixed.hpp"

const int Fixed::_bit = 8;

Fixed::Fixed() : _number(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int raw)
{
	std::cout << "Int constructor called" << std::endl;
	this->_number = raw << this->_bit;
}

Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	this->_number = roundf(raw * (1 << this->_bit));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{	
	std::cout << "Copy constructor called" << std::endl;
	this->_number = obj.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->_number = obj.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_number;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_number = raw;
}

float Fixed::toFloat(void) const
{
	return this->_number / (float)(1 << this->_bit);
}

int Fixed::toInt(void) const
{
	return this->_number >> this->_bit;
}

std::ostream & operator<<(std::ostream & cout, const Fixed & objs)
{
	cout << objs.toFloat();
	return (cout);
}
