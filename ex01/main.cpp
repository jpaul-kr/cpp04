/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:55:59 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/07/22 12:54:10 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	//const Animal* j = new Dog();
	//const Animal* i = new Cat();

	/*Dog	d1;
	Dog	d2; //use also copy constructor
	
	d2 = d1;

	std::cout << "d1 address: " << &d1 << "\nbrain address: " << d1.getBrain() << std::endl;
	std::cout << "d2 address: " << &d2 << "\nbrain address: " << d2.getBrain() << std::endl;*/

	int	num = 6;
	Animal*	animals[num];

	for (int i = 0; i < num / 2; i++)
		animals[i] = new Dog();
	std::cout << std::endl;
	for (int i = num / 2; i < num; i++)
		animals[i] = new Cat();
	std::cout << std::endl;
	for (int i = 0; i < num; i++)
		delete animals[i];

	//i->makeSound();
	//j->makeSound();
	//delete j;
	//delete i;
	return 0;
}
