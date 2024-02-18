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
		std::cout << "Введите целое положительное число от 0 до 20 или -1 для выхода\n";
		std::cin.clear();
		std::cin.sync();
		if (std::cin >> input && input >= 0 && input <= 20)
			std::cout << "Факториал равен " << findFact(input) << "\n\n";
		else if (input != -1)
			std::cout << "Некорректный ввод\n\n";
	}
	std::cout << "До свидания\n";
	return 0;
}