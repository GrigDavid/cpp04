#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	// {
	// 	Animal anim;
	// 	Cat cat;
	// 	Cat copyCat(cat);
	// 	Dog hafo;
	// 	std::cout << cat.getType() << std::endl;
	// 	std::cout << copyCat.getType() << std::endl;
	// 	std::cout << hafo.getType() << std::endl;
	// 	std::cout << anim.getType() << std::endl;
	// 	cat.makeSound();
	// 	copyCat.makeSound();
	// 	hafo.makeSound();
	// 	anim.makeSound();
	// }
	// {
	// 	const Animal* meta = new Animal();
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();
	// 	std::cout << j->getType() << " " << std::endl;
	// 	std::cout << i->getType() << " " << std::endl;
	// 	i->makeSound(); //will output the cat sound!
	// 	j->makeSound();
	// 	meta->makeSound();
	// 	delete meta;
	// 	delete j;
	// 	delete i;
	// }
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