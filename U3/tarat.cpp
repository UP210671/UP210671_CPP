#include <iostream>
using namespace std;
int main()
{
    int n, sum; 
    for ( sum = 0; sum <= 100; sum++)
    {
        cout<<"Ingrese un numero: ";
    cin>>n;
        sum = sum + n;
    }
    cout<<"LA SUMA A LLEGADO A 100"<<endl;
    cout<<"Sesion terminada"<<endl;
return 0;
}