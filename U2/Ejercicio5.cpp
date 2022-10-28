/*
Date:03/10/2022
Author: Cesar Eduardo Juarez Jasso
Email: UP210671@alumnos.upa.edu.mx
Descriptions:Exercise 5 
*/
#include<iostream>

using namespace std;

int main()
{
    /* code */
    int contador=0;
    float temperature, tempAcum = 0,maxtem=0,mintem=99999;
    do{
        cout<<"Give me the temperature: ";
        cin>> temperature;
        tempAcum += temperature;
        if (temperature>=maxtem)
        {
            /* code */
            maxtem=temperature;
        }
        if (temperature<=mintem)
        {
            /* code */
            mintem = temperature;
        }
        
        contador++;
    }while(contador<6);

    cout<<"The average of temperature today is: "<<tempAcum/6<<", \n the lowest temperature is: " <<mintem<<", \n the hightes temperature is: "<<maxtem<<endl;
    return 0;
}
