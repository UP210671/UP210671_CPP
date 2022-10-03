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

    cout<<"The average of temperature today is: "<<tempAcum/6<<", the lowest temperature is: " <<mintem<<", the hightes temperature is: "<<maxtem<<endl;
    return 0;
}
