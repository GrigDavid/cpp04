#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal zoo[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			zoo[i] = Dog();
		}
		else
		{
			zoo[i] = Cat();
		}
	}
	for (int i = 0; i < 10; i++)
	{
		zoo[i].makeSound();
	}
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	return (0);
}