/*
Date:28/09/2022
Author: Cesar Eduardo Juarez Jasso
Email: UP210671@alumnos.upa.edu.mx
Descriptions:Exercise 3 
*/
#include <iostream>
using namespace std;
int main(){
    int e,pe;
    cout<<"How old are you ? ";
    cin>>e;
    if (e>=0){
        if (e>=0 && e<4){
            cout <<"----------Your payment is:  Free----------"<<endl;
        }
        else if (e>=4 && e<=18){
            cout << "----------Your payment is:  $5 pesos----------"<<endl;
        }
        else if (e>18){
            cout << "----------Your payment is  $10 pesos----------"<<endl;
        }
    }
        else {
            cout << "----------Invalid rating----------"<<endl;
    return 0;
}
}