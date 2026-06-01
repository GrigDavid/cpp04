#include "Cat.hpp"
#include "Dog.hpp"

int main()
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
			zoo[i] = new Animal();
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
	
	
	return (0);
}