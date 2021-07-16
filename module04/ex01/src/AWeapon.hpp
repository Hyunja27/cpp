#ifndef A_WEAPON_HPP
# define A_WEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
	protected:
		/* declare member variable */
	public:
		AWeapon();
		AWeapon(const std::string& /* parameter */, ...);
		AWeapon(const AWeapon& copy);
		AWeapon& operator=(const AWeapon& obj);
		virtual ~AWeapon();

		/* declare member function */
};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const AWeapon& aWeapon);

#endif
