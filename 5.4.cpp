
#include <iostream>

int main()
{
	float x1 = 6;//Задаем координаты точек
	float y1 = -1;
	float x2 = -2;
	float y2 = 5;
	int a = sqrt(pow(x2 - x1, 2));//Находим длинны сторон
	int b = sqrt(pow(y2 - y1, 2));
	int P = 2 * (a + b);//Находим периметр
	int S = a * b;//Находим площадь
	printf_s("%i\n%i", P, S);//Выводим ответы на экран
	return 0;

}

