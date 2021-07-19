#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		/* declare member variable */
		std::string _name;
		int _ap;
		AWeapon* Primary_weapon;

	public:
		Character();
		Character(std::string const & name);
		Character(const Character& copy);
		Character& operator=(const Character& obj);
		virtual ~Character();

		/* declare member function */
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy* enemy);
		std::string getName() const;
		AWeapon* getWeapon() const;
		int getAP() const;
};

// /* global operator overload */
std::ostream&	operator<<(std::ostream& out, const Character& character);

#endif
