#include <iostream>
using namespace std;
int main(){
    // Declare the variables.
    int n,c = 0;
    // Ask the user for the number
    cout << "Write a number to multiply by:";
    cin >> n;

    // Ask the user for the limit
    cout << "How many times do you want it multiplied";
    cin >>c;

    if (c>=0 || c <=0){
    for (int i = 0; i <= c; i++)
    {
        // If and for to print the firts line of -
        if (i == 1)
        {
            for (int f = 0; f <= 41; f++)
            {
                cout << "-";
            }
            cout << "\n";
        }
        
        // Print the formatted table.
        cout << "|  " << i << "\t x \t" << n << "\t = \t" << (i * n) << "\t |\n";
        
        // For to print line of -
        for (int f = 0; f <= 41; f++)
        {
            cout << "-";
        }
        cout << "\n";
    }
    }

    return 0;
}