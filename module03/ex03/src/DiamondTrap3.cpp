#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap " << "default constructor." << std::endl;
}
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " destructor." << std::endl;
}
DiamondTrap::DiamondTrap(std::string _name) {
	std::cout << "DiamondTrap " << _name << " constructor." << std::endl;
	this->name = _name;
	std::cout << name << std::endl;
	ClapTrap::setName(_name.append("_clap_name"));
	this->FragTrap::setHitPoints(100);
	this->ScavTrap::setEnergyPoints(50);
	this->FragTrap::setAttackDamage(30);
}
DiamondTrap::DiamondTrap(DiamondTrap& c) {
	std::cout << "DiamondTrap copy constructor." << std::endl;
	*this = c;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& c) {
	std::cout << "DiamondTrap assignation overloading." << std::endl;
	this->ClapTrap::operator=(c);
	return (*this);
}
void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap Name : " << this->name << ". ClapTrap Name : " << ClapTrap::getName() << "." << std::endl;
}