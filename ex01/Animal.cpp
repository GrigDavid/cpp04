#include "Animal.hpp"

Animal::Animal() : _type("unspecified")
{
}

Animal::Animal(const std::string& type) : _type(type)
{
}

Animal::Animal(const Animal& other) : _type(other._type)
{
}

Animal::~Animal()
{}

Animal& Animal::operator=(const Animal& other)
{
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

void	Animal::makeSound()
{}