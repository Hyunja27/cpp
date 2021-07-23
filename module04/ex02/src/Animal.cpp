#include "Animal.hpp"
Animal::Animal() {
	this->type = "Some animal";
}
Animal::Animal(std::string type) {
	this->type = type;
}
Animal::~Animal() {
}
Animal::Animal(const Animal& other) {
	*this = other;
}
Animal& Animal::operator=(const Animal& other) {
	this->type = other.getType();
	return (*this);
}
std::string const & Animal::getType() const {
	return (this->type);
}