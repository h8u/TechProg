
#include "pch.h"
#include <iostream>

int main()
{
	int enterNum, interimNum, rub, kop, rubEnd, kopEnd;
	setlocale(LC_ALL, "Russian");
	std::cout << "Входные данные: ";
	std::cin >> enterNum;
	interimNum = enterNum;

	if (interimNum < 100)
	{
		std::cout << "Итого: " << enterNum << " ";

		if (interimNum == 0) { std::cout << "Ничего не куплено."; }
		
		if (interimNum <= 20)
		{
			if (interimNum > 5) { std::cout << "Копеек"; }
			if (interimNum == 1) { std::cout << "Копейка"; }
			if (interimNum == 2 || interimNum == 2 || interimNum == 3 || interimNum == 4) { std::cout << "Копейки"; }
		}
		else
		{
			std::cout << "Копеек";
		}
		
	}
	else //interimNum > 100
	{
		
		rub = interimNum / 100; //Находим только рубли
		rubEnd = rub;
        std::cout << "Итого: " << rub << " ";

		if (interimNum <= 20)
		{
			if (interimNum > 5) { std::cout << "Рублей"; }
			if (interimNum == 1) { std::cout << "Рубль"; }
			if (interimNum == 2 || interimNum == 2 || interimNum == 3 || interimNum == 4) { std::cout << "Рубля"; }
		}
		else
		{
			std::cout << "Рублей";
		}

		kop = interimNum % 100;
		std::cout << " " << kop;

		if (kop <= 20)
		{
			if (kop == 0) { std::cout << " Копеек"; }
			if (kop > 5) { std::cout << " Копеек"; }
			if (kop == 1) { std::cout << " Копейка"; }
			if (kop == 2 || kop == 2 || kop == 3 || kop == 4) { std::cout << " Копейки"; }
		}
		else
		{
			std::cout << " Копеек";
		}


	}

	return 0;
}

