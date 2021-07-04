#include "ZombieEvent.hpp"

/* ************************************************************************** */
/* ---------------------------- STATIC VARIABLE ----------------------------- */
/* ************************************************************************** */

/* static variable code */

/* ************************************************************************** */
/* ------------------------------ CONSTRUCTOR ------------------------------- */
/* ************************************************************************** */

ZombieEvent::ZombieEvent()
{

}

/* ************************************************************************** */
/* ------------------------------- DESTRUCTOR ------------------------------- */
/* ************************************************************************** */

ZombieEvent::~ZombieEvent()
{
	/* destructor code */
}

std::string ZombieEvent::setZombieType(void)
{
	std::string set[10];
	set[0] = "Front_end_zombie";
	set[1] = "Back_end_zombie";
	set[2] = "Android_zombie";
	set[3] = "IOS_zombie";
	set[4] = "AI_zombie";
	set[5] = "Cloud_zombie";
	set[6] = "Embedded_zombie";
	set[7] = "So_rich_but_So_old_zombie";
	set[8] = "BeakSu_zombie";
	set[9] = "Hansome_and_rich_and_young_zombie";

	int tmp = rand() % 10;
	return (set[tmp]);
}

Zombie* ZombieEvent::newZombie(std::string _name)
{
	return (new Zombie(setZombieType(), _name));
}

Zombie* ZombieEvent::randomChump(void)
{
	std::string set[10];
	set[0] = "Skim";
	set[1] = "Jaeskim";
	set[2] = "Yjung";
	set[3] = "Hyunlee";
	set[4] = "Spark";
	set[5] = "Jaemkim";
	set[6] = "Hkwon";
	set[7] = "Michoi";
	set[8] = "Mr.Polabear";
	set[9] = "Lee_min_Suck";

	int tmp = rand() % 10;
	Zombie *zom = new Zombie(setZombieType(), set[tmp]);
	zom->announce();
	return (zom);
}
