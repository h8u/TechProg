

#include "pch.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int enterNum, i = 2;
	std::cout << "Введите число: ";
	std::cin >> enterNum;
	std::cout << enterNum << " = 1";
	while (enterNum > 1)
	{
		while (enterNum % i == 0)
		{
			std::cout << " * " << i;
			enterNum = enterNum / i;
		}
		i++;
	}
	return 0;
}
