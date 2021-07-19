#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:
		/* declare member variable */
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle& copy);
		PlasmaRifle& operator=(const PlasmaRifle& obj);
		virtual ~PlasmaRifle();

		/* declare member function */
		void attack() const;
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const PlasmaRifle& plasmaRifle);

#endif
