#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP

# include <string>
# include <iostream>

class PlasmaRifle
{
	private:
		/* declare member variable */
	public:
		PlasmaRifle();
		PlasmaRifle(const std::string& /* parameter */, ...);
		PlasmaRifle(const PlasmaRifle& copy);
		PlasmaRifle& operator=(const PlasmaRifle& obj);
		virtual ~PlasmaRifle();

		/* declare member function */
};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const PlasmaRifle& plasmaRifle);

#endif
