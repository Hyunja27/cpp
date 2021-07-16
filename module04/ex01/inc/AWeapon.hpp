#ifndef A_WEAPON_HPP
# define A_WEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
	protected:
		/* declare member variable */
		std::string _name;
		int 		_apcost;
		int 		_damage;

	public:
		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon& copy);
		AWeapon& operator=(const AWeapon& obj);
		virtual ~AWeapon();
		/* declare member function */
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const AWeapon& aWeapon);

#endif
