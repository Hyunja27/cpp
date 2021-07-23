#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
	protected:
		/* declare member variable */
		int _hp;
		std::string _type;

	public:
		Enemy();
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy& copy);
		Enemy& operator=(const Enemy& obj);
		virtual ~Enemy();

		/* declare member function */
		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int damage);
};

// /* global operator overload */
// std::ostream&	operator<<(std::ostream& out, const Enemy& enemy);

#endif
