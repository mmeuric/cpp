/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:24:29 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:24:32 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "<<<SUBJECT TESTING>>>" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete(meta);
	delete(i);
	delete(j);

	std::cout << std::endl << "<<<ANIMAL TESTING>>>" << std::endl;
	const Animal* anim = new Animal();
	std::cout << "anim type is : " << anim->getType() << std::endl;
	anim->makeSound();
	delete(anim);

	std::cout << std::endl << "<<<DOG TESTING>>>" << std::endl;
	const Animal* doge = new Dog();
	std::cout << "doge type is : " << doge->getType() << std::endl;
	doge->makeSound();
	delete(doge);

	std::cout << std::endl << "<<<CAT TESTING>>>" << std::endl;
	const Animal* kitty = new Cat();
	std::cout << "kitty type is : " << kitty->getType() << std::endl;
	kitty->makeSound();
	delete(kitty);

	std::cout << std::endl << "<<<WRONG ANIMAL TESTING>>>" << std::endl;
	const WrongAnimal* wrong = new WrongAnimal();
	std::cout << "wrong type is : " << wrong->getType() << std::endl;
	wrong->makeSound();
	delete(wrong);

	std::cout << std::endl << "<<<WRONG CAT TESTING>>>" << std::endl;
	const WrongAnimal* wcat = new WrongCat();
	std::cout << "wcat type is : " << wcat->getType() << std::endl;
	wcat->makeSound();
	delete(wcat);
}
