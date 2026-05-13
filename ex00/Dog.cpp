#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
}

Dog::Dog(const Dog& other) : Animal("Dog")
{
}

Dog& Dog::operator=(const Dog& other)
{
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

Dog::~Dog()
{
}

void Dog::makeSound()
{
	std::cout << "Haf!" << std::endl;
}