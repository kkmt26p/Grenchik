///Гринчик Александр
///Даны два ненулевых числа. Найти сумму, разность, произведение и частное их квадратов.
#include<iostream>
#include<cmath>
int main()
{
double a;
double b;
std::cin >> a;
std::cin >> b;
    double sum = (a*a)+(b*b);
    double razn = (a*a)-(b*b);
    double proiz = (a*a)*(b*b);
    double chastn = (a*a)/(b*b);
    std::cout << sum << std:: endl;
    std::cout << razn << std:: endl;
    std::cout << proiz << std:: endl;
    std::cout << chastn << std:: endl;
    return 0;
}
