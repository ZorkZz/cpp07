#include "Array.hpp"

template <typename T>
Array<T>::~Array()
{
	if (_array != NULL)
		delete[] _array;
}

template <typename T>
Array<T>::Array(): Array(NULL), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n): Array(new T[n]), _size(n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		T[i] = 0;
	}
}

template <typename T>
Array<T>	&Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw (OutOfRange());
	return (_array[i]);
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &array)
{
	unsigned int	new_size = array.get_size();
	if (this->_array != NULL)
		delete[] this->_array;
	this->_array = new T[new_size]
	for (size_t i = 0; i < new_size; i++)
	{
		this->_array[i] = array[i];
	}
	return (&this);
}

template <typename T>
unsigned int	Array<T>::get_size() const
{
	return (_size);
}

template <typename T>
char const*	Array<T>::OutOfRange::what() const throw() {return ("Array::Exeption : index out of range");}
