#include "Fixed.hpp"

// Constructors
Fixed::Fixed() : _value(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const int &value)
{
	std::cout << "Int constructor called" << std::endl;
	_value = value << _fractional_bits;
}

Fixed::Fixed(const float &value) : _value(value)
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Operators
Fixed &Fixed::operator=(const Fixed &assign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &assign)
	{
		this->_value = assign.getRawBits();
	}
	return (*this);
}

int Fixed::toInt(void) const
{
	int result;
	result = _value >> _fractional_bits;
	return (result);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

// Getters / Setters
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}
void Fixed::setRawBits(int const raw)
{
	_value = raw;
}
