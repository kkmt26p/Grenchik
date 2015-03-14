///For17. ƒано вещественное число A и целое число N (> 0).
///»спользу€ один цикл, найти сумму 1 + A + A2 + A3 + Е + AN.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a;
int n;
int n2=0;
cin >> a >>n;
for (int i=1; i<=n; i++)
{
n2=n2+pow(a,i);
}
cout <<"n2="<< n2+1<<endl;
return 0;
}
