#include <iostream>
using namespace std;
int main(){
    int R, I;
    cout<<"¿Cual es tu renta anual?"<<endl;
    cin>>R;
    if(R<=10000){
        cout<<"Tu porcentaje a pagar es de: 5%"<<endl;
        I=R*.5;
        cout<<"Tu impuesto a pagar es de: "<<I;
    }
    if(R>=10000){
        cout<<"Tu porcentaje a pagar es de: 15%"<<endl;
        I=R*.15;
        cout<<"Tu impuesto a pagar es de: "<<I;

    }
    if(R>=20000){
        cout<<"Tu porcentaje a pagar es de: 20%"<<endl;
        I=R*.20;
        cout<<"Tu impuesto a pagar es de: "<<I;

    }if(R>=35000){
        cout<<"Tu porcentaje a pagar es de: 30%"<<endl;
        I=R*.30;
        cout<<"Tu impuesto a pagar es de: "<<I;

    }if(R>=60000){
        cout<<"Tu porcentaje a pagar es de: 45%"<<endl;
        I=R*.45;
        cout<<"Tu impuesto a pagar es de: "<<I;

    }
}