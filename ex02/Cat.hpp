/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:14:25 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/07/29 10:31:40 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(const string type);
		Cat(const Cat& cpy);
		virtual ~Cat();

		Cat&	operator=(const Cat& cpy);
		void	makeSound() const;
		Brain*	getBrain() const;

	private:
		Brain*	_brain;
};

#endif
