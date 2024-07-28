#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

using std::string;

class Brain
{
	public:
		Brain();
		Brain(const Brain& cpy);
		~Brain();

		Brain&	operator=(const Brain& cpy);
	private:
		string	ideas[100];
};

#endif
