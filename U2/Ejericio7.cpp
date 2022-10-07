#include <iostream>
using namespace std;
 int main (){

int d, n;
string b;
do
{
    /* code */
    cout<<"Input a decimal number: \n";
    cin>>n;
    if (n >0)
    {
        /* code */
        while (n>0)
        {
            if (n%2==0)
            {
                b='0'+b;
            }
            else
            {
            b='1'+b;
            }
            n/=2;
        }
        cout << "The number you've inputted is " << b;
            cout << endl;
        }
        else if (n == 0)
        {
            cout << "You've inputted a 0\n";
        }
        else
        {
            cout << "The numer must be greater than 0\n";
        }
    } while (n < 0);
    return 0;
    }