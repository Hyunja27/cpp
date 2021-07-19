#ifndef POWER_FIST_HPP
# define POWER_FIST_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	private:
		/* declare member variable */
	public:
		PowerFist();
		PowerFist(const PowerFist& copy);
		PowerFist& operator=(const PowerFist& obj);
		virtual ~PowerFist();

		/* declare member function */
		void attack() const;
};

/* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const PowerFist& powerFist);

#endif
