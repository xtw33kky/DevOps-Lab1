#include <iostream>
#include <string>
#include <sstream>

size_t FindFact(int num) // Вычисление факториала
{
	size_t fact;
	for (fact = 1; num > 1; num--)
		fact *= num;
	return fact;
}

int GetInput() // Получение и проверка введеного значения
{
	int intInput = 0;
	std::string input;
	
	// Получение введеного значения
	getline(std::cin, input, '\n');

	std::istringstream is(input);
	is >> intInput;

	// Проверка введеного значения
	if (!is.fail()) // Проверка пройдена
	{
		return intInput;
	}

	return -2; // Проверка не пройдена
}

int main()
{
	int input = 1;
	while (input != -1) // Меню программы
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