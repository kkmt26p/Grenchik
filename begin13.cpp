///Гринчик Александр
///Даны два круга с общим центром и радиусами R1 и R2 (R1 > R2). Найти площади этих кругов S1 и S2, а также площадь S3 кольца, внешний радиус которого равен R1, а внутренний радиус равен R2:
///S1 = π·(R1)2,        S2 = π·(R2)2,        S3 = S1 − S2.
///В качестве значения π использовать 3.14.
#include<iostream>
#include <cmath>
using namespace std;
 int main()
{
    double R1;
    double R2;
    double pi=3.14;
    cin>>R1;
    cin>>R2;
    double S1 = pi*(R1*R1);
    double S2 = pi*(R2*R2);
    double S3 = S1-S2;
    cout <<"S1="<< S1 <<  endl;
    cout <<"S2="<< S2 <<  endl;
    cout <<"S3="<< S3 <<  endl;
    return 0;
}
