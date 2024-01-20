#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include <cstdlib>

template <typename T>
class Array
{
	public:
		Array();
		~Array();
		Array(unsigned int n);
		Array(const Array<T> &array);
		Array	&operator=(Array const &array);
		T	&operator[](unsigned int i);
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


#include "Array.tpp"

#endif