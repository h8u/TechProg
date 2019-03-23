
#include "pch.h"
#include <iostream>
#include <ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
	int randNum, enterNum;
	int n = 10;
	
	srand(time(NULL));
	randNum = rand() % 1000;
	std::cout << "Отгадайте число. У вас 10 попыток \n";
	std::cout << randNum;
	do
	{
        std::cout << "\n Введите число: ";
	    std::cin >> enterNum;
		if (enterNum != randNum)
		{
			if (enterNum > randNum)
			{
				n--;
				if (n == 0) { std::cout << "\nУ вас закончились попытки. Загаданное число: " << randNum; break; }
				std::cout << "Меньше! У вас осталось " << n << " попыток";
				
			}
			else
			{
				n--;
				if (n == 0) { std::cout << "\nУ вас закончились попытки. Загаданное число: " << randNum; break; }
				std::cout << "Больше! У вас осталось " << n << " попыток";
				
			}
		}
		else 
		{
			std::cout << "\n Вы отгадали число за " << n << " попыток! Браво!";
			break;
		}
		
	} while (n >= 0);
	return 0;
}

