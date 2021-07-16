#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	private:
		/* declare member variable */
		std::string _name;
		std::string _title;
		Sorcerer();

	public:
		Sorcerer(const std::string& _name, const std::string& _title);
		Sorcerer(const Sorcerer& copy);
		Sorcerer& operator=(const Sorcerer& obj);
		virtual ~Sorcerer();

		/* declare member function */
		void polymorph(Victim const &) const;
		std::string get_name(void) const;
		std::string get_title(void) const;

};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const Sorcerer& sorcerer);

#endif
