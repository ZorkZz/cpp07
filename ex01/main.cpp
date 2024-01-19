#include "iter.hpp"

void	fill_tab(char &i)
{
	i = 65;
}

int	main(void)
{
	{
		char	v[5] = {85, 39, 84, 45, 110};

		for (size_t i = 0; i < 5; i++)
		{
			std::cout << v[i];
		}
		std::cout << std::endl;
		::iter(v, 5, fill_tab);
		for (size_t i = 0; i < 5; i++)
		{
			std::cout << v[i];
		}
		std::cout << std::endl;
	return (0);
	}
}