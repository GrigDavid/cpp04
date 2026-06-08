#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal(), _brain(new Brain())
{
	type = "Cat";
	std::cout << "Cat was created" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), _brain(new Brain(*(other._brain)))
{
	std::cout << "Cat was created" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	*_brain = *(other._brain);
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat was destroyed:(" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

void Cat::setIdea(int index, const std::string& idea)
{
	_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
	return (_brain->getIdea(index));
}