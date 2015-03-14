///For9. Даны два целых числа A и B (A < B).Найти сумму квадратов всех целых чисел от A до B включительно.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a ;
    int b ;
    int sum = 0;
    cin >> a;
    cin >> b;
    for (int i=a; i<b+1; ++i)
        sum += pow(i, 2);
    cout <<"sum = "<<sum<< endl;
    return 0;
}
