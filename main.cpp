#include <iostream>

size_t findFact(int num)
{
	size_t fact;
	for (fact = 1; num > 1; num--) 
		fact *= num;
	return fact;
}

int main() 
{
	int input = 1;
	while (input != -1)
	{
		system("cls");
		std::cout << "Введите целое положительное число от 0 до 20 или -1 для выхода\n";
		std::cin >> input;
		
		if (std::cin.fail())
		{
			std::cout << "Ошибка ввода данных." << std::endl;
		}
		else
		{
			if (input >= 0 && input <= 20)
				std::cout << "Факториал равен " << findFact(input) << "\n\n";
			else
				std::cout << "Ошибка ввода данных." << std::endl;
		}
	}
	std::cout << "До свидания\n";
	return 0;
}