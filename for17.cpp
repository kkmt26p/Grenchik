///For17. ���� ������������ ����� A � ����� ����� N (> 0).
///��������� ���� ����, ����� ����� 1 + A + A2 + A3 + � + AN.

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
