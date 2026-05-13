#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
}

Cat::Cat(const Cat& other) : Animal("Cat")
{
}

Cat& Cat::operator=(const Cat& other)
{
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

Cat::~Cat()
{
}

void Cat::makeSound()
{
	std::cout << "Meow!" << std::endl;
}