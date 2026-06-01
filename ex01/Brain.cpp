#include "Brain.hpp"
#include <iostream>

Brain::Brain() : _ideas()
{
	std::cout << "Brain was created" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain was created" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = other._ideas[i];
	}
}

Brain&	Brain::operator=(const Brain& other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = other._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{

	std::cout << "Brain was destroyed" << std::endl;
}

void Brain::setIdea(int index, const std::string& idea)
{
	if (index < 0 || index >= 100)
		return ;
	_ideas[index] = idea;
}
std::string Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
		return ("");
	return (_ideas[index]);
}