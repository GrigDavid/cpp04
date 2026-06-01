#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog was created" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog was created" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	Animal::operator=(other);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog was destroyed:(" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Haf!" << std::endl;
}