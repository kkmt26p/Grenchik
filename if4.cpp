///If4°. Даны три целых числа. Найти количество положительных чисел в исходном наборе.
#include<iostream>
using namespace std;
int main()
{
int a,b,c;
int colv=0;
cin>>a;
cin>>b;
cin>>c;
if(a>0)
colv+=1;
if(b>0)
colv+=1;
if(c>0)
colv+=1;
cout<<colv<<endl;

return 0;
}
