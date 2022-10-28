/*
Date: 13/10/2022
Author: Cesar Eduardo Juarez Jasso
Email: UP210671@alumnos.upa.edu.mx
Description: Exercice 9
*/
#include <iostream>
#include <cmath>//Complex operations
#include <iomanip>//Setting the number of decimals
using namespace std;

float bisection(float num){
    //Equation y=x²+x-12
    return pow(num,2)+num-12;
}

int main(){
    int counter=1;
    float a,b,c,ya,yb,yc;
    cout << "This graph is using the formula x²+x-12 \n";
    cout << "Give me the value of (a)";
    cin >> a;
    cout << "Give me the value of (b)";
    cin >> b;
    c = (a+b)/2;
    ya = bisection(a);
    yb = bisection(b);
    yc = bisection(c);
    if ((yb * ya < 0) || (ya * yc < 0) || (yc * yb < 0)){
    cout << "| Exercise \t|\t A \t\t|\t B\t\t|\t C \t\t|\t f(A) \t\t\t|\t f(B) \t\t\t|\t f(C) \t\t\t| \n";//Table Header
    for (int i = 0; i < 185; i++)
    {
        cout << "-";
    }
    cout << "\n";
    cout << "| \t" << counter << "\t|\t" << fixed << setprecision(3) << a << "\t\t|\t" << b << "\t\t|\t" << c << "\t\t|\t" << ya << "\t\t\t|\t" << yb << "\t\t\t|\t" << yc << "\t\t\t|\n"; 
    for (int i = 0; i < 185; i++)
    {
        cout << "-";
    }
    cout << "\n";

        while (yc >= 0.01 || yc <= -0.01)
        {
            if ((yc > 0 && ya < 0) || (ya > 0 && yc < 0))//Set up b as the new limit (c) and then c would be the half of the previous value
            {
                b = c;
            }
            else//Same thing but if yb is the opposite sign of yc
            {
                a = c;
            }
            if (a == b)//If point b ends being point b, the cycle would loop infinately, this prevents that
            {
                break;
            }
            
            c = (a+b)/2;
            ya = bisection(a);
            yb = bisection(b);
            yc = bisection(c);
            counter++;
            cout << "| \t" << counter << "\t|\t" << fixed << setprecision(3) << a << "\t\t|\t" << b << "\t\t|\t" << c << "\t\t|\t" << ya << "\t\t\t|\t" << yb << "\t\t\t|\t" << yc << "\t\t\t|\n";
            for (int i = 0; i < 185; i++)
            {
                cout << "-";
            }
            cout << "\n";
        }
    cout << "The root is approximately " << setprecision(1) <<  c<<"\n";
    }
    else //If yb and ya were both the same sign
    {
        cout << "There's no root between the numbers";
    }
    return 0;
}