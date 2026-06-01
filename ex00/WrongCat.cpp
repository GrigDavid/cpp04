#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat was created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat was created" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	WrongAnimal::operator=(other);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat was destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}