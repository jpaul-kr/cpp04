/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:55:59 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/08/01 16:48:09 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	//const AAnimal j;

	//j.makeSound();

	/*Dog	d1;
	Dog	d2(d1); //use also copy constructor
	
	//d2 = d1;

	std::cout << "d1 address: " << &d1 << "\nd2 address: " << &d2 << std::endl;
	std::cout << "d1 brain address: " << d1.getBrain() << "\nd2 brain address: " << d2.getBrain() << std::endl;*/

	int		num = 6;
	AAnimal*	animals[num];

	for (int i = 0; i < num / 2; i++)
		animals[i] = new Dog();
	std::cout << std::endl;
	for (int i = num / 2; i < num; i++)
		animals[i] = new Cat();
	std::cout << std::endl;
	for (int i = 0; i < num; i++)
		delete animals[i];
	return 0;
}
