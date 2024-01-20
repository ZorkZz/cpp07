#include "iter.hpp"

void	print(std::string const	&str)
{
	std::cout << str << std::endl;
}
int	main(void)
{
	{
		std::string	v[5] = {"85", "39", "84", "45", "110"};

		for (size_t i = 0; i < 5; i++)
		{
			std::cout << v[i] << std::endl;
		}
	return (0);
	}
}