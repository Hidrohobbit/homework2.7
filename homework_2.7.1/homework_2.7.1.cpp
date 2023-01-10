#include <iostream>
#define MODE 1

int main()
{
	setlocale(LC_ALL, "Russian");
	int number_1 = 0;
	int number_2 = 0;

#ifndef MODE
#error MODE definition required
#endif
#if MODE == 0
	std::cout << "Работаю в режиме тренировки";
#elif MODE == 1
#define ADD(num_1, num_2) ( (num_1+num_2) )
	std::cout << "Работаю в боевом режиме\n";
	std::cout << "Введите число 1: ";
	std::cin >> number_1;
	std::cout << "\nВведите число 2: ";
	std::cin >> number_2;
	std::cout << "\nРезультат сложения: " << ADD(number_1, number_2);
#else
	std::cout << "Неизвестный режим. Завершение работы";
#endif
}