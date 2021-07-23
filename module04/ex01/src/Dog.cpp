#include "Dog.hpp"
Dog::Dog() : Animal("Dog") {
	std::cout << "Dog::Dog() run" << std::endl;
	this->dog_brain = new Brain();
}
Dog::~Dog() {
	delete(this->dog_brain);
}
Dog::Dog(const Dog& other) {
	*this = other;
}
Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog::operater= run" << std::endl;
	this->Animal::operator=(other);
	delete(this->dog_brain);
	this->dog_brain = new Brain(*other.dog_brain);
	// int i = -1;
	// while(++i < 100)
	// 	this->dog_brain[i] = other.dog_brain[i];
	return (*this);
}
void Dog::makeSound() const
{
	std::cout << "Bow-wow!!!" << std::endl;
}
