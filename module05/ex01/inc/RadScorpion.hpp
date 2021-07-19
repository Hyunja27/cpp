#ifndef RAD_SCORPION_HPP
# define RAD_SCORPION_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:
		/* declare member variable */
	public:
		RadScorpion();
		RadScorpion(const RadScorpion& copy);
		RadScorpion& operator=(const RadScorpion& obj);
		virtual ~RadScorpion();

		/* declare member function */
};

/* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const RadScorpion& radScorpion);

#endif
