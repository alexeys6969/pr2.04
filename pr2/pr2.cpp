// pr2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
    //Первое задание
	double xFirst, yFirst, zFirst, xSecond, ySecond, zSecond;
	double P;
	double squareFisrt, squareSecond;
	std::cout << "Введите стороны первого треугольника: \n";
	std::cin >> xFirst >> yFirst >> zFirst;
	P = (xFirst + yFirst + zFirst) / 2;
	squareFisrt = sqrt(P * (P - xFirst) * (P - yFirst) * (P - zFirst));

	std::cout << "Введите стороны второго треугольника: \n";
	std::cin >> xSecond >> ySecond >> zSecond;
	P = (xSecond + ySecond + zSecond) / 2;
	squareSecond = sqrt(P * (P - xSecond) * (P - ySecond) * (P - zSecond));
	
	if (squareFisrt == squareSecond) std::cout << "Площади треугольников равны\n";
	else std::cout << "Площади треугольников не равны\n";

	//Второе задание
	double a, b;
	std::cout << "Введите два числа: \n";	
	std::cin >> a >> b;
	if (a != b) 
	{
		if (a > b) b = a;
		else if (a < b) a = b;
	}
	else {
		a = 0;
		b = 0;
	}
	std::cout << "а = " << a << "\nb = " << b;

	//Третье задание
	int numberMonth;
	std::cout << "Введите номер месяца: \n";
	std::cin >> numberMonth;
	switch (numberMonth) {
	case 1:
		std::cout << "Январь — 31 день";
		break;
	case 2:
		std::cout << "Февраль — 28 или 29 дней";
		break;
	case 3:
		std::cout << "Март — 31 день";
		break;
	case 4:
		std::cout << "Апрель — 30 дней";
		break;
	case 5:
		std::cout << "Май — 31 день";
		break;
	case 6:
		std::cout << "Июнь — 30 дней";
		break;
	case 7:
		std::cout << "Июль — 31 день";
		break;
	case 8:
		std::cout << "Август — 31 день";
		break;
	case 9:
		std::cout << "Сентябрь — 30 дней";
		break;
	case 10:
		std::cout << "Октябрь — 31 день";
		break;
	case 11:
		std::cout << "Ноябрь — 30 дней";
		break;
	case 12:
		std::cout << "Декабрь — 31 день";
		break;
	}
	
}
