#include <iostream>
#include <limits.h>
#include <string>

size_t findFact(int num)
{
	size_t fact;
	for (fact = 1; num > 1; num--) 
		fact *= num;
	return fact;
}

int GetInput()
{
	std::string input;
	std::cin >> input;
	if (std::cin.fail() || input.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		return -2;
	}
	else
		return 0;
}

int main() 
{
	int input = 1;
	while (input != -1)
	{
		std::cout << "Введите целое положительное число от 0 до 20 или -1 для выхода\n";
		input = GetInput();
		if (input >= 0 && input <= 20)
			std::cout << "Факториал равен " << findFact(input) << "\n\n";
		else if (input != -1)
			std::cout << "Некорректный ввод\n\n";
	}
	std::cout << "До свидания\n";
	return 0;
}