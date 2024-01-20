#include "Array.hpp"

int	main(void)
{
	Array<int>	numbers(700);
	Array<int>	clone(numbers);
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
	clone = numbers;

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
	try
	{
		Array<int>	numbers(700);

		std::cout << numbers[-1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}