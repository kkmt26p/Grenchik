///If5. Даны три целых числа. Найти количество положительных и количество отрицательных чисел в исходном наборе.
#include<iostream>
using namespace std;
int main()
{
int a,b,c;
int poloj=0;
int otr=0;
cin>>a;
cin>>b;
cin>>c;
if(a>0)
poloj+=1;
else
otr+=1;
if(b>0)
poloj+=1;
else
otr+=1;
if(c>0)
poloj+=1;
else
otr+=1;
cout<<"poloj="<<poloj<<endl;
cout<<"otr="<<otr<<endl;

return 0;
}
