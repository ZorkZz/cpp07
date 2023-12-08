#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <functional>

template <typename T>
void	iter(T a[], size_t b, void func(T &))
{
	for(size_t i = 0; i < b; i++)
	{
		func(a[i]);
	}
}

#endif