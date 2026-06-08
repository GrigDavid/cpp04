#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
	{
		Animal* zoo[10];
		for (int i = 0; i < 5; i++)
		{
			zoo[i] = new Dog();
		}
		for (int i = 5; i < 10; i++)
		{
			zoo[i] = new Cat();
		}
		for (int i = 0; i < 10; i++)
		{
			(*zoo[i]).makeSound();
		}
		for (int i = 0; i < 10; i++)
		{
			delete zoo[i];
		}
	}
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	{
		Dog first;
		Dog second(first);

		first.makeSound();
		second.makeSound();

		first.setIdea(0, "alo");
		Dog third = first;
		first.setIdea(0, "inch");
		std::cout << "first:: " << first.getIdea(0) <<std::endl;
		std::cout << "third:: " << third.getIdea(0) <<std::endl;
	}
	return (0);
}