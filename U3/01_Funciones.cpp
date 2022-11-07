/*
Date:12/09/2022
Author: Cesar Eduardo Juarez Jasso
Email: UP210671@alumnos.upa.edu.mx
Descriptions:Exercise 1
*/
#include <iostream>
using namespace std;
int conjunto[5][5];
int main (){
for (int c = 0; c < 5; c++){
    for (int l = 0; l < 5; l++)
    {
        /* code */
        cout<<"Ingrse un valor: ["<<c<<"]["<<l<<"]: ";
        cin>>conjunto[c][l];
    }
}
for (int l = 0; l < 5; l++)
{
    /* code */
    for (int c = 0; c < 5; c++)
    {
        /* code */
        cout<<conjunto[c][l];
    }
    cout<<endl;

}
return 0;
}