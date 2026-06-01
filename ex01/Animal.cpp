#include "Animal.hpp"

Animal::Animal() : type("unspecified")
{
}

Animal::Animal(const std::string& type) : type(type)
{
}

Animal::Animal(const Animal& other) : type(other.type)
{
}

Animal::~Animal()
{}

Animal& Animal::operator=(const Animal& other)
{
	if (this == &other)
		return (*this);
	type = other.type;
	return (*this);
}

void	Animal::makeSound()
{}