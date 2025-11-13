#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
  public:
	// Constructors
	Fixed();
	Fixed(const int &value);
	Fixed(const float &value);
	Fixed(const Fixed &copy);

	// Destructor
	~Fixed();

	// Operators
	Fixed &operator=(const Fixed &assign);

	int toInt(void) const;
	float toFloat(void) const;

	// Getters / Setters
	int getRawBits() const;
	void setRawBits(int const raw);

  private:
	int _value;
	static const int _fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif