#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

# include <string>
# include <iostream>

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
        virtual ISpaceMarine* clone() const = 0;
        virtual void battleCry() const = 0;
        virtual void rangedAttack() const = 0;
        virtual void meleeAttack() const = 0;
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const Squad& squad);

#endif