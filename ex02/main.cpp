#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Cat cats[5];
	Dog dogs[5];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			dogs[i] = Dog();
		}
		else
		{
			cats[i - 5] = Cat();
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			dogs[i].makeSound();
		}
		else
		{
			cats[i - 5].makeSound();
		}
	}
	const Dog* j = new Dog();
	const Cat* i = new Cat();
	delete j;
	delete i;
	return (0);
}