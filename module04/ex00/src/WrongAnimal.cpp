
#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal() {
	this->type = "Some animal";
}
WrongAnimal::WrongAnimal(std::string type) {
	this->type = type;
}
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal fall asleep..!" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	*this = other;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	this->type = other.getType();
	return (*this);
}
std::string const & WrongAnimal::getType() const {
	return (this->type);
}
void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal WrongAnimal!!!" << std::endl;
}