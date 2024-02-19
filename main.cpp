#include <iostream>
#include <limits.h>

size_t findFact(int num)
{
	size_t fact;
	for (fact = 1; num > 1; num--) 
		fact *= num;
	return fact;
}

int GetInput()
{
	int input = 0;
	std::cin >> input;
	if (std::cin.fail()) //Если инпут неправильый
	{
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		return -2;
	}
	else //Если инпут правильный
	{
		return input;
	}
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