///If9. Даны две переменные вещественного типа: A, B. Перераспределить значения данных переменных так,
/// чтобы в A оказалось меньшее из значений, а в B — большее. Вывести новые значения переменных A и B."
#include<iostream>
using namespace std;
int main()
{
double a,b;
cin>>a;
cin>>b;
if(a>b)
  {

    cout<<" a= "<<b<<endl;
    cout<<" b= "<<a<<endl;
    }
    else
        {cout<<" a= "<<a<<endl;
        cout<<" b= "<<b<<endl;
        }
return 0;
}
