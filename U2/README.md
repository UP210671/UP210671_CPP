<h1 align="center",>
Welcome to unit two folder: Control structures and cycles
<h1>
<div align = "center">
<img src="../imagenes/welcome.gif" width="500">
</div>

 ## Index:  

- [Exercise 1](./Ejercicio1.cpp)  
- [Exercise 2](./Ejercicio2.cpp)  
- [Exercise 3](./Ejercicio3.cpp)  
- [Exercise 4](./Ejercicio4.cpp)
- [Exercise 5](./Ejercicio5.cpp)
- [Exercise 6](./Ejercicio6.cpp)
- [Exercise 7](./Ejercicio7.cpp)
- [Exercise 8](./Ejercicio8.cpp)

<center> <h4>Exercise 1.Program that asks the user for their annual income and shows on the screen the corresponding tax</h4> </center>
 <H1><span style="color:green">INPUT</span>

 ```c++
    cout<<"What is your annual income?"<<endl;
    cin>>R;
 ```
<H1><span style="color:purple">PROCESS</span>

```c++
if(R<=10000){
        cout<<"Your percentage to pay is: 5%"<<endl;
        I=R*.5;
        cout<<"Your tax to pay is: "<<I<<"\n\n";
    }
    if(R>10000){
        cout<<"Your percentage to pay is: 15%"<<endl;
        I=R*.15;
        cout<<"Your tax to pay is: "<<I<<"\n\n";
    }
    if(R>=20000){
        cout<<"Your percentage to pay is: 20%"<<endl;
        I=R*.20;
        cout<<"Your tax to pay is: "<<I<<"\n\n";
    }
    if(R>=35000){
        cout<<"Your percentage to pay is: 30%"<<endl;
        I=R*.30;
        cout<<"Your tax to pay is: "<<I<<"\n\n";
    }
    if(R>=60000){
        cout<<"Your percentage to pay is: 45%"<<endl;
        I=R*.45;
        cout<<"Your tax to pay is: "<<I<<"\n\n";
```
<H1><span style="color:red">OUTPUT</span>

```C++  
        cout<<"Your percentage to pay is: n%"<<endl;
        cout<<"Your tax to pay is: "<<I<<"\n\n";
```
<H1><span style=color:#93EDC3>EXPLANATION</span>

```C++
This program is about applying a tax to an annual rent based on the rent value:
RENT VALUE | TAX(%)
60000 | 45%
35000 | 30%
20000 | 20%
10000 | 15%
+0 | 5%
The program works this way:

1.- Ask the user to write their annual rent.
2.- The user types in their annual rent.
3.- Through the use of if , verify that the user typed in a valid number in the rent.
4.- If the user types in a wrong number, don't run the program.
5.- If the user types in a valid number proceed with the main if function:
- Check the data value and run it through a bunch of if and if else in descending order.
-  If the value is bigger than 60000, multiply the tax value by .45 to symbolise that the tax is 45%. If the value is bigger than 35000, apply a tax of 30% by multiplying it by .30 and so on.
6.- Print out the rent the user initially pays, the tax to pay, the your porcentage to pay.
7.- Use Return 0 to check if the program is running correctly.
```