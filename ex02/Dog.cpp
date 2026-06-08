#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal(), _brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog was created" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), _brain(new Brain(*(other._brain)))
{
	std::cout << "Dog was created" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	*_brain = *(other._brain);
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog was destroyed:(" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Haf!" << std::endl;
}

void Dog::setIdea(int index, const std::string& idea)
{
	_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
	return (_brain->getIdea(index));
}