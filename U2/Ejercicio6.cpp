#include <iostream>
using namespace std;
int main(){
    int numproducto = 1;
    float price, amount, total=0;
    cout<<"Welcome to P.A.Y, plase input the amount and price of your products. To end program, type a 0\n\n";
    do
    {
        /* code */
        cout<<"Product "<<numproducto<<"\nAmount: ";
        cin>>amount;
        if (amount<=0)
        {
            /* code */
            cout<<"\n----------Invalid amount,exiting program----------\n";
            break;
        }
        cout<<"Price: ";
        cin>>price;
        if (price<0)
        {
            /* code */
            cout<<"\n----------Invalid amount, exiting program----------\n";
            break;
        }
        numproducto++;
        total += (price * amount);
    } while (price !=0);
    cout<<"\nYou've inputted a total of "<<numproducto-2 << " 2different products. ";
    cout<<"\nYour total is $"<<total<<" \n\n";        
}