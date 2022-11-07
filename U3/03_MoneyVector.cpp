

/*
Date: 26/10/2022
Author: Cesar Eduardo Juarez Jasso
Email: up210671@alumnos.upa.edu.mx
Description: Money Vector
Last Modification: 26/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream>

using namespace std;

void Change(int number);
void PrintChange(int);

int AmountofMoney[9] = {0};
int Denominations[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
string Tickets[9] = {"$500", "$200", "$100", "$50", "$20", "$10", "$5", "$2", "$1"};
//------------------ MAIN FUNCTION ---------------------
int main()
{
   int money;
   cout << "Give me a money amount: \n";
   cin >> money;
   Change(money);
   PrintChange(money);
   return 0;
}

void Change(int number)
{
   if (number > 20)
   {
      do
      {
         for (int i = 0; i < 9; i++)
         {
            (number >= Denominations[i]) ? AmountofMoney[i]++, number -= Denominations[i] : number;
         }
      } while (number > 0);
   }
   else
   {
      do 
      {
         for (int i = 5; i < 9; i++)
         {
            (number >= Denominations[i]) ? AmountofMoney[i]++, number -= Denominations[i] : number;
         }
      } while (number > 0);
   }
}
void PrintChange(int number)
{
   if (number > 0)
   {
      cout << "\nYou've inputted the amount of $" << number << "\nYour exchange: \n";
      if (number > 20)
      {
         for (int i = 0; i < 9; i++)
         {
            cout << Tickets[i] << "\t=\t" << AmountofMoney[i] << endl;
         }
      }
      else
      {
         for (int i = 5; i < 9; i++)
         {
            cout << Tickets[i] << "\t=\t" << AmountofMoney[i] << endl;
         }
      }
   }
}