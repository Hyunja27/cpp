#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
	private:
		/* declare member variable */
	public:
		Enemy();
		Enemy(const std::string& /* parameter */, ...);
		Enemy(const Enemy& copy);
		Enemy& operator=(const Enemy& obj);
		virtual ~Enemy();

		/* declare member function */
};

/* global operator overload */
std::ostream&	operator<<(std::ostream& out, const Enemy& enemy);

#endif
