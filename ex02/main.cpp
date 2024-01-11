#include "Array.hpp"

int	main(void)
{
	Array<int>	numbers(700);
	srand(time(NULL));
	for (int i = 0; i < 700; i++)
	{
		const int value = rand();
		numbers[i] = value;
	}
	for (int i = 0; i < 700; i++)
	{
		std::cout << numbers[i] << std::endl;
	}
	std::cout << numbers.get_size() << std::endl;

	Array<char>	str(700);
	srand(time(NULL));
	for (int i = 0; i < 700; i++)
	{
		str[i] = 'a';
	}
	for (int i = 0; i < 700; i++)
	{
		std::cout << str[i] << std::endl;
	}
	std::cout << numbers.get_size() << std::endl;
	return (0);
}