#include "Cat.hpp"
Cat::Cat() : Animal("Cat") {
}
Cat::~Cat() {
	std::cout << "Cat fall asleep..!" << std::endl;
}
Cat::Cat(const Cat& other) {
	*this = other;
}
Cat& Cat::operator=(const Cat& other) {
	this->Animal::operator=(other);
	return (*this);
}
void Cat::makeSound() const{
	std::cout << "Meow!!!" << std::endl;
}