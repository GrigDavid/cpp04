#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
}

Dog::Dog(const Dog& other) : Animal("Dog"), _brain(new Brain(*(other._brain)))
{
}

Dog& Dog::operator=(const Dog& other)
{
	if (this == &other)
		return (*this);
	_type = other._type;
	*_brain = Brain(*(other._brain));
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
}

void Dog::makeSound()
{
	std::cout << "Haf!" << std::endl;
}