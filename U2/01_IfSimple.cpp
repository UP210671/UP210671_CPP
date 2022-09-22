#include <iostream>
using namespace std;
int main()
{
   int numero;
   int dato = 1;
   cout << "Ingresa un numero entero: ";
   cin >> numero;
       //Ejercicio: utilice las diferentes comparaciones ==, !=, <, >, <=, >=
   if (numero == dato){
    cout << "El número es igual a dato " <<numero<< endl;}
    if (numero != dato){
    cout << "El número es diferente de " << endl;}
    if (numero < dato){
    cout << "El número es mayor al dato" << endl;}
    if (numero > dato){
    cout << "El número es menor al dato " << endl;}
    if (numero <= dato){
    cout << "El número es mayor igual al dato "<< endl;}
   if (numero >= dato){
    cout << "El número es menor igual al dato" << endl;}

    return 0;
}