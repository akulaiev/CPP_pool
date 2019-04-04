
#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
public:

	Fixed				(void);
	Fixed				(Fixed const & inst);
	~Fixed				(void);
	Fixed &				operator=(Fixed const & inst);
	int 				getRawBits(void) const;
	void 				setRawBits(int const raw);
private:

	int					_fixed_point;
	static int const	_fract_bit_num;
};

#endif
