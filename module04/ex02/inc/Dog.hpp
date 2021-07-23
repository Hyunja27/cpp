#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
private:
	Brain * dog_brain;		

public:
	Dog();
	~Dog();
	Dog(const Dog&);
	Dog& operator=(const Dog&);
	virtual void makeSound()  const;
};
#endif