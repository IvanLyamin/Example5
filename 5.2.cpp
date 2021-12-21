

#include <iostream>

int main()
{
    int A = 0;// Задаем координаты точек
    int B = 4;
    int C = 10;
    int AC = C - A;// Производим вычисление
    int BC = C - B;
    int summ = AC + BC;
    printf_s("%i\n%i\n%i", AC, BC, summ);// Выводим на экран полученные даннные
    return 0;
}
