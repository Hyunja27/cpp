#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	private:
		/* declare member variable */
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& copy);
		Brain& operator=(const Brain& obj);
		virtual ~Brain();
		std::string getIdea(int index) const;

		/* declare member function */
};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const Brain& brain);

#endif
