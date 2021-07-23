#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal {
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat&);
	WrongCat& operator=(const WrongCat&);
	virtual void makeSound() const;
};
#endif
