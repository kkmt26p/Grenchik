///For9. ���� ��� ����� ����� A � B (A < B).����� ����� ��������� ���� ����� ����� �� A �� B ������������.
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
