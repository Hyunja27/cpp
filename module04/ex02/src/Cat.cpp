#include "Cat.hpp"
Cat::Cat() : Animal("Cat") 
{
	std::cout << "Cat::Cat() run" << std::endl;
	this->cat_brain = new Brain();
}
Cat::~Cat() {
	delete(this->cat_brain);
}
Cat::Cat(const Cat& other) {
	*this = other;
}
Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat::operater= run" << std::endl;
	this->Animal::operator=(other);

	delete(this->cat_brain);

	this->cat_brain = new Brain(*other.cat_brain);
	// int i = -1;
	// while(++i < 100)
	// 	this->cat_brain[i] = other.cat_brain[i];
	return (*this);
}
void Cat::makeSound() const{
	std::cout << "Meow!!!" << std::endl;
}
