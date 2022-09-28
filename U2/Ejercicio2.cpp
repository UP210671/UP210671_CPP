/*
Date:12/09/2022
Author: Cesar Eduardo Juarez Jasso
Email: UP210671@alumnos.upa.edu.mx
Descriptions:Exercise 2 
*/
#include <iostream>
using namespace std;
int main(){
    double c;
    cout<<"¿What is your calification?"<<endl;
    cin>>c;
    if ((c == 0)||(c == 0.4)||(c >= 0.6 && c <= 1)){
        if (c ==0 ){
            cout << "----------Unacceptable----------"<<endl;
        }
        else if (c == 0.4){
            cout << "----------Acceptable----------"<<endl;
        }
        else if (c >= 0.6 && c <= 1){
            cout << "----------Meritorious----------"<<endl;
        }
        cout << "Your bonus is: $" << 2400*c<<endl;
        }
        else {
            cout << "----------Invalid rating----------"<<endl;

        }
        return 0;
}
