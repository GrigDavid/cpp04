#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("")
{
	std::cout << "Animal was created" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal " << type << " was created" << std::endl;
}

Animal::~Animal()
{
	if (type.empty())
		std::cout << "Animal was destroyed" << std::endl;
	else
		std::cout << "Animal " << type << " was destroyed" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this == &other)
		return (*this);
	type = other.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Some animal noises" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}