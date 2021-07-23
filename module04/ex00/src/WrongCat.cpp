#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat") {
}
WrongCat::~WrongCat() {
}
WrongCat::WrongCat(const WrongCat& other) {
	*this = other;
}
WrongCat& WrongCat::operator=(const WrongCat& other) {
	this->WrongAnimal::operator=(other);
	return (*this);
}
void WrongCat::makeSound() const{
	std::cout << "Meow!!!" << std::endl;
}