#include <iostream>
#include "math.h"
#include <cmath>

int main()
{
	setlocale(LC_ALL, "ru");
	int A = 0;
	int B = 0;
	int number = 0;
	std::cout << "Введите первое число: ";
	std::cin >> A;
	std::cout << "Введите второе число: ";
	std::cin >> B;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> number;

	switch (number) {
	case 1: std::cout << sum(A, B);
		break;
	case 2: std::cout << sub(A, B);
		break;
	case 3: std::cout << mult(A, B);
		break;
	case 4: std::cout << division(A, B);
		break;
	case 5: std::cout << pow(A, B);
		break;
	}	
}