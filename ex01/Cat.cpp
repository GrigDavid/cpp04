#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
}

Cat::Cat(const Cat& other) : Animal("Cat"), _brain(new Brain(*(other._brain)))
{
}

Cat& Cat::operator=(const Cat& other)
{
	if (this == &other)
		return (*this);
	type = other.type;
	*_brain = Brain(*(other._brain));
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
}

void Cat::makeSound()
{
	std::cout << "Meow!" << std::endl;
}