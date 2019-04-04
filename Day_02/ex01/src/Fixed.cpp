#include "../includes/Fixed.hpp"
#include <iostream>

int const Fixed:: _fract_bit_num = 8;

Fixed::Fixed	(void) : _fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed	(Fixed const & inst)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = inst;
}

Fixed::Fixed	(int const val)
{

}

Fixed::Fixed	(float const val)
{
	
}

Fixed::~Fixed	(void) {}

Fixed &			Fixed::operator=(Fixed const & inst)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_point = inst.getRawBits();
	return (*this);

}

int 			Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point);
}

void 			Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

float			Fixed::toFloat(void) const
{

}

int				Fixed::toInt(void) const
{
	
}