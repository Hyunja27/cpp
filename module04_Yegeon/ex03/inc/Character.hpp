#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		/* declare member variable */
		AMateria* _inventory[4];
		AMateria* _table[10];
		std::string _name;
		int 		_materia_num;
		int 		_table_num;

	public:
		Character();
		Character(const std::string& _name);
		Character(const Character& copy);
		Character& operator=(const Character& obj);
		virtual ~Character();

		/* declare member function */
		std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const Character& character);

#endif
