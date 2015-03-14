///Гринчик Александр
///Даны катеты прямоугольного треугольника a и b. Найти его гипотенузу c и периметр P:
///c = (a2 + b2)1/2,        P = a + b + c.
#include<iostream>
#include<cmath>
int main()
{
double a;
double b;
std::cin >> a;
std::cin >> b;
    double c = sqrt((a*a)+(b*b));
    double P = a+b+c;
    std::cout << c << std:: endl;
    std::cout << P << std:: endl;
    return 0;
}
