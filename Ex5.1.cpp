

#include <iostream>
#include <cmath>

int main()
{
	float x1 = 6;//Задаем координаты точек
	float y1 = -1;//Задаем координаты точек
	float x2 = -2;//Задаем координаты точек
	float y2 = 5;//Задаем координаты точек
	float distance;
	distance = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));//Находим расстояние между точками
	printf_s("%f", distance);//Выводим ответ на экран
	return 0;

}