

#include <iostream>

int main()
{
	float x1 = 6;//Задаем координаты точек
	float y1 = -1;
	float x2 = -2;
	float y2 = 5;
	float x3 = 3;
	float y3 = 9;
	double a = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));//Находим длинны сторон
	double b = sqrt((pow(x3 - x2, 2)) + (pow(y3 - y2, 2)));
	double c = sqrt((pow(x1 - x3, 2)) + (pow(y1 - y3, 2)));
	double P = a + b + c;//Находим периметр
	double p = P / 2;//Находим полупериметр для нахождения прощади
	double S = sqrt(p * (p - a) * (p - b) * (p - c));//Находим площадь
	printf_s("%f\n%f", P, S);//Выводим значения на экран
	return 0;

}