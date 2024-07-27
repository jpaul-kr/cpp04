#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const string type);
		WrongCat(const WrongCat& cpy);
		~WrongCat();

		WrongCat&	operator=(const WrongCat& cpy);
		void		makeSound() const;
};

#endif
