#include "Dog.hpp"
Dog::Dog() : Animal("Dog") {
}
Dog::~Dog() {
	std::cout << "Dog fall asleep..!" << std::endl;
}
Dog::Dog(const Dog& other) {
	*this = other;
}
Dog& Dog::operator=(const Dog& other) {
	this->Animal::operator=(other);
	return (*this);
}
void Dog::makeSound() const
{
	std::cout << "Bow-wow!!!" << std::endl;
}