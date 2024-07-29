/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:57:02 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/07/29 11:30:53 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>
# include <string>
# include "Brain.hpp"

using std::string;

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const string type);
		AAnimal(const AAnimal& cpy);
		virtual ~AAnimal();

		AAnimal&		operator=(const AAnimal& cpy);
		virtual void	makeSound() const = 0;
		void		setType(const string type);
		string		getType() const;

	protected:
		string	_type;
};


#endif
