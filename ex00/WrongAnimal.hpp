#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

using std::string;

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const string type);
		WrongAnimal(const WrongAnimal& cpy);
		virtual ~WrongAnimal();

		WrongAnimal&		operator=(const WrongAnimal& cpy);
		void		makeSound() const;
		void		setType(const string type);
		string		getType() const;

	protected:
		string	_type;
};


#endif
