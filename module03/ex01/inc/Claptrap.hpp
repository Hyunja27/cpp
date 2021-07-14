#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class Claptrap
{
	private:
		/* declare member variable */
		std::string _name;
		unsigned int Hit_point;
		unsigned int Energy_point;
		unsigned int Attack_damage;
	
	public:
		Claptrap();
		Claptrap(const std::string& string);
		Claptrap(const Claptrap& copy);
		~Claptrap();
		Claptrap& operator=(const Claptrap& obj);
		
		/* declare member function */
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void set_Hit_point(unsigned int num);
		void set_Energy_point(unsigned int num);
		void set_Attack_damage(unsigned int num);
		void set_Name(std::string str);

		unsigned int get_Hit_point();
		unsigned int get_Energy_point();
		unsigned int get_Attack_damage();
		std::string get_Name();
};

/* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const Claptrap& claptrap);

#endif
