#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{
	private:
		/* declare member variable */
		std::string _name;
		Victim();

	public:
		Victim(const std::string& _name);
		Victim(const Victim& copy);
		Victim& operator=(const Victim& obj);
		virtual ~Victim();

		/* declare member function */
		std::string get_name(void) const;
		virtual void getPolymorphed() const;
};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const Victim& victim);

#endif
