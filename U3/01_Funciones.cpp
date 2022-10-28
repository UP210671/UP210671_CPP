/*Cesar Eduardo Juarez Jasso
  UP210671*/
#include <iostream>
using namespace std;
int conjunto[5][5];
int main (){
for (int c = 0; c < 5; c++){
    for (int l = 0; l < 5; l++)
    {
        /* code */
        cout<<"Ingrse un valor: ";
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