#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
	// Dog basic;
	// {
	// Dog tmp = basic;
	// }
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	i->makeSound();
	j->makeSound();
	delete j;
	delete i;
	// Dog a;
	// Dog b;
	// a.setIdea(0, "Foooood");
	// b.setIdea(0, "CAAT");
	// a = b;
	// std::cout << a.getIdea(0) <<std::endl;
	return (0);
}