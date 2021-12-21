

#include <iostream>

int main()
{
    int A = 3;//Задаеи координаты точек
    int B = 12;
    int C = 6;
    int AC = C - A;//Находим длинны отрезков
    int BC = B - C;
    int S = AC * BC;//Находим произведение
    printf_s("%i\n%i\n%i", AC, BC, S);//Выводим ответ на экран
    return 0;
}
