#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	{
		Animal* zoo[10];
		for (int i = 0; i < 10; i++)
		{
			if (i < 5)
			{
				zoo[i] = new Dog();
			}
			else
			{
				zoo[i] = new Cat();
			}
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
		return 0;
	}
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
	}
	return (0);
}