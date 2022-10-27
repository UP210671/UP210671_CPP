/*
Date:12/09/2022
Author: Cesar Eduardo Juarez Jasso
Email: UP210671@alumnos.upa.edu.mx
Descriptions:Exercise 1
*/
#include <iostream>
using namespace std;
int main(){
    int R, I,T;
    cout<<"What is your annual income?"<<endl;
    cin>>R;
    if(R<=10000){
        cout<<"Your percentage to pay is: 5%"<<endl;
        I=R*.05;
        T=I+R;
        cout<<"Your tax to pay is: "<<I<<"\n\n";
        cout<<"Your total to pay is "<<T<<"\n\n";
    }
    else if(R>10000){
        cout<<"Your percentage to pay is: 15%"<<endl;
        I=R*.15;
        T=I+R;
        cout<<"Your tax to pay is: "<<I<<"\n\n";
        cout<<"Your total to pay is "<<T<<"\n\n";
    }
    else if(R>=20000){
        cout<<"Your percentage to pay is: 20%"<<endl;
        I=R*.20;
        T=I+R;
        cout<<"Your tax to pay is: "<<I<<"\n\n";
        cout<<"Your total to pay is "<<T<<"\n\n";
    }
    else if(R>=35000){
        cout<<"Your percentage to pay is: 30%"<<endl;
        I=R*.30;
        T=I+R;
        cout<<"Your tax to pay is: "<<I<<"\n\n";
        cout<<"Your total to pay is "<<T<<"\n\n";
    }
    else if(R>=60000){
        cout<<"Your percentage to pay is: 45%"<<endl;
        I=R*.45;
        T=I+R;
        cout<<"Your tax to pay is: "<<I<<"\n\n";
        cout<<"Your total to pay is "<<T<<"\n\n";
    }
    return 0;
}