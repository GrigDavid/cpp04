#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal was created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
	std::cout << "WrongAnimal " << type << " was created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	if (type.empty())
		std::cout << "WrongAnimal was destroyed" << std::endl;
	else
		std::cout << "WrongAnimal " << type << " was destroyed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this == &other)
		return (*this);
	type = other.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong animal noises" << std::endl;
}