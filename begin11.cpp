///Гринчик Александр
/// Даны два ненулевых числа. Найти сумму, разность, произведение и частное их модулей.
#include<iostream>
#include <cmath>
using namespace std;
 int main()
{
    double a;
    double b;
    cin >> a;
    cin >> b;
    double sum = fabs(a+b);
    double razn = fabs(a-b);
    double proiz = fabs(a*b);
    double chastn = fabs(a/b);
    cout <<"sum="<< sum <<  endl;
    cout <<"razn="<< razn <<  endl;
    cout <<"proiz="<< proiz<<  endl;
    cout <<"chastn="<< chastn <<  endl;
    return 0;
}
