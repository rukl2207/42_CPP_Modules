#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	{
		std::cout << "--------- Correct test ---------" << std::endl;
		const Animal* animal = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << "---------" << std::endl;

		std::cout << "Type: " << animal->getType() << std::endl;
		animal->makeSound();
		std::cout << "Type: " << dog->getType() << std::endl;
		dog->makeSound();
		std::cout << "Type: " << cat->getType() << std::endl;
		cat->makeSound();

		std::cout << "---------" << std::endl;
		delete animal;
		delete dog;
		delete cat;
	}
	std::cout << std::endl;
	{
		std::cout << "--------- Wrong test ---------" << std::endl;
		const WrongAnimal* animal_w = new WrongAnimal();
		const WrongAnimal* cat_w = new WrongCat();
		const WrongCat* cat_ww = new WrongCat();

		std::cout << "---------" << std::endl;

		std::cout << "Type: " << animal_w->getType() << std::endl;
		animal_w->makeSound();
		std::cout << "Type: " << cat_w->getType() << std::endl;
		cat_w->makeSound();
		std::cout << "Type: " << cat_ww->getType() << std::endl;
		cat_ww->makeSound();

		std::cout << "---------" << std::endl;
		delete animal_w;
		delete cat_w;
		delete cat_ww;
	}

//	system("leaks animals");
	return (0);
}
