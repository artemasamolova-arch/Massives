#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	//Задание 1
	std::cout << "Задание 1\nМассив: ";
	
	
	const int size = 10;
	int a[size];
	
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 100 + 1;
		std::cout << a[i] << " ";
	}
	int max = a[0];
	int min = a[0];
	for (int i = 0; i < size; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	std::cout << "\nМинимальный элемент: " << min << std::endl;
	std::cout << "Максимальный элемент: " << max << std::endl;

	//Задание 2
	std::cout << "\nЗадание 2\nИсходный массив: ";

	const int size1 = 15;
	int b[size1];
	for (int i = 0; i < size1; i++)
	{
		b[i] = rand() % 100 + 1;
		std::cout << b[i] << " ";
	}
	int min_val = 0, max_val = 0, number = 0;
	std::cout << "\nНачало диапазона(1-100): ";
	std::cin >> min_val;
	while (min_val < 1 || min_val > 100)
	{
		std::cout << "Некорректный ввод. Повторите попытку";
		std::cout << "\nНачало диапазона(1-100): ";
		std::cin >> min_val;
	}
	std::cout << "Конец диапазона(1-100): ";
	std::cin >> max_val;
	while (max_val < 1 || max_val > 100 || max_val < min_val)
	{
		std::cout << "Некорректный ввод. Повторите попытку";
		std::cout << "\nКонец диапазона(1-100): ";
		std::cin >> max_val;
	}
	std::cout << "Число-порог(1-100): ";
	std::cin >> number;
	while (number < 1 || number > 100 || number < min_val || number > max_val)
	{
		if (number < 1 || number > 100)
		{
			std::cout << "Некорректный ввод. Повторите попытку";
		}
		else if (number < min_val || number > max_val)
		{
			std::cout << "Число должно входить в заданный диапазон. Повторите попытку";
		}
		
		std::cout << "\nЧисло-порог(1-100): ";
		std::cin >> number;
	}
	double sum = 0;
	for (int i = 0; i < size1; i++)
	{
		if (b[i] >= min_val && b[i] <= max_val && b[i] < number)
		{
			sum += b[i];
		}
		
	}
	std::cout << "Сумма элементов: " << sum << std::endl;

	//Задание 3

	std::cout << "\nЗадание 3\n";
	const int months = 12;
	double profit[months];
	std::cout << "Введите прибыль фирмы за каждый месяц" << std::endl;
	for (int i = 0; i < months; i++)
	{
		std::cout << "Месяц " << i + 1 << ": ";
		std::cin >> profit[i];
	}

	int start = 0, end = 0;
	std::cout << "Начало диапазона: ";
	std::cin >> start;
	while (start < 1)
	{
		std::cout << "Некорректный ввод.Повторите попытку\n";
		std::cout << "Начало диапазона: ";
		std::cin >> start;
	}
	std::cout << "Конец диапазона: ";
	std::cin >> end;
	while (end > 12 && end < start)
	{
		std::cout << "Некорректный ввод.Повторите попытку\n";
		std::cout << "Конец диапазона: ";
		std::cin >> end;
	}
	int startIndex = start - 1;
	int endIndex = end - 1;

	int maxIndex = startIndex;
	int minIndex = startIndex;
	for (int i = startIndex; i <= endIndex; i++)
	{
		if (profit[i] > profit[maxIndex])
		{
			maxIndex = i;
		}
		if (profit[i] < profit[minIndex])
		{
			minIndex = i;
		}
	}
	std::cout << "Макисмальная прибыль была в месяце " << maxIndex + 1 << "(" << profit[maxIndex] << ")" << std::endl;
	std::cout << "Минимальная прибыль была в месяце " << minIndex + 1 << "(" << profit[minIndex] << ")" << std::endl;








}