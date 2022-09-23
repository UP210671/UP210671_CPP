

/* Unidad 2. Uso del if else
   Autor: Luis Ernesto Anaya Tiscareño
   Fecha: 01/09/2022
   Descripción: Muestra el uso del if else
*/
#include <iostream>
using namespace std;
int main()
{
   int numero;
   int dato = 1;

   cout << "Ingresa un numero entero: ";
   cin >> numero;
   if (numero == dato){
    cout << "El número es igual a dato" << endl;
   }   
   else{
    cout << "El número es diferente del dato" << endl;
   }
   if (numero != dato){
    cout << "El número es diferente del dato" << endl;
   }   
   else{
    cout << "El número es diferente del dato" << endl;
   }
   if (numero < dato){
    cout << "El número es igual a dato" << endl;
   }   
   else{
    cout << "El número es diferente del dato" << endl;
   }
   if (numero > dato){
    cout << "El número es igual a dato" << endl;
   }   
   else{
    cout << "El número es diferente del dato" << endl;
   }
   if (numero <= dato){
    cout << "El número es igual a dato" << endl;
   }   
   else{
    cout << "El número es diferente del dato" << endl;
   }
   if (numero >= dato){
    cout << "El número es igual a dato" << endl;
   }   
   else{
    cout << "El número es diferente del dato" << endl;
   }
    //Ejercicio: utilice las diferentes comparaciones ==, !=, <, >, <=, >=
    return 0;
}