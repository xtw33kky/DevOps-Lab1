#include <iostream>
#include <limits.h>
#include <string>
#include <sstream>

size_t FindFact(int num)
{
	size_t fact;
	for (fact = 1; num > 1; num--) 
		fact *= num;
	return fact;
}

int GetInput()
{
	int intInput = 0;
	std::string input;
	getline(std::cin, input, '\n');
	std::istringstream is (input);
	is >> intInput;

	if (!is.fail() && is.eof())
	{
		return intInput;
	}

	// if (input.find_first_not_of("0123456789") == std::string::npos)
	// {
	// 	return std::stoi(input);
	// }
	return -2;
}

int main() 
{
	int input = 1;
	while (input != -1)
	{
		std::cout << "Введите целое положительное число от 0 до 20 или -1 для выхода\n";
		input = GetInput();
		if (input >= 0 && input <= 20)
			std::cout << "Факториал равен " << FindFact(input) << "\n\n";
		else if (input != -1)
			std::cout << "Некорректный ввод\n\n";
	}
	std::cout << "До свидания\n";
	return 0;
}