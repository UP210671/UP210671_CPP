/*Date:28/09/2022
Author: Cesar Eduardo Juarez Jasso
Email: UP210671@alumnos.upa.edu.mx
Descriptions:Exercise 4 
*/
#include <iostream>
using namespace std;
int main(){
    int p,pe,i;
    cout<<"Your pizza is vegetarian or cold meat ?\n If your pizza is vegetarian type: 1, if it is cold meat type: 2 \n Your selection is:";
    cin>>p;
    if (p==1){
        if (p==1){
            cout << "----------These are the ingredients: 1-Pepper 2-Tofu----------\nSelect the ingredient with the number that corresponds to it:"<<endl;
            cin>>i;
            if (i==1){
                cout<<"This is your pizza and these are your ingredients: \n-Motzarela\n-Tomato\n-Pepper\n\n\n";
            }
            else if (i==2)
            {
                cout<<"This is your pizza and these are your ingredients: \n-Motzarela\n-Tomato\n-Tofu"<<endl;   
            }       
    }
}
    else {
            cout << "----------These are the ingredients: 1-Peperoni 2-Ham 3-Salmon -----------\nSelect the ingredient with the number that corresponds to it:"<<endl;
            cin>>i;
            if (i==1){
                cout<<"This is your pizza and these are your ingredients: \n-Motzarela\n-Tomato\n-Pepperoni\n\n\n";
            }
            else if (i==2)
            {
                cout<<"This is your pizza and these are your ingredients: \n-Motzarela\n-Tomato\n-Ham"<<endl;
            }
            else if (i==3)
            {
                cout<<"This is your pizza and these are your ingredients: \n-Motzarela\n-Tomato\n-Salmon"<<endl;     
            }
    }
return 0;
}
