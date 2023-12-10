#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include "Array.tpp"

template<typename T>
class Array
{
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array	&operator=(Array const &array);
		Array	&operator[](unsigned int i);
		unsigned int	get_size() const;
		class OutOfRange : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		T				*_array;
		unsigned int	_size;
};



#endif