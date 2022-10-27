<h1 align="center",>
Welcome to unit two folder: Control structures and cycles
</h1>
<div align = "center">
<img src="../imagenes/welcome.gif" width="500">
</div>

 ## Index:  
<center>

 * [----------------------------Exercise 1----------------------------](./Ejercicio1.cpp)    
 * [----------------------------Exercise 2----------------------------](./Ejercicio2.cpp)  
 * [----------------------------Exercise 3----------------------------](./Ejercicio3.cpp)  
 * [----------------------------Exercise 4----------------------------](./Ejercicio4.cpp)
 * [----------------------------Exercise 5----------------------------](./Ejercicio5.cpp)
 * [----------------------------Exercise 6----------------------------](./Ejercicio6.cpp)
 * [----------------------------Exercise 7----------------------------](./Ejercicio7.cpp)
 * [----------------------------Exercise 8----------------------------](./Ejercicio8.cpp)

</center>

<center> <h2>Exercise 1.Program that asks the user for their annual income and shows on the screen the corresponding tax</h2> </center>
 <H1><span style="color:green">INPUT</span>

</h1>

 ```c++
    cout<<"What is your annual income?"<<endl;
    cin>>R;
 ```
<H1><span style="color:purple">PROCESS</span>
</h1>

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
</h1>

```C++  
        cout<<"Your percentage to pay is: n%"<<endl;
        cout<<"Your tax to pay is: "<<I<<"\n\n";
```
<H1><span style=color:#93EDC3>EXPLANATION</span>
</h1>

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

<H1><span style=color:BROWN>TEST</span>

    1. "9999"
<div align = "center">
<img src="../imagenes/u1.png" width="200">
</div>

    2. "10001"
<div align = "center">
<img src="../imagenes/u2.png" width="200">
</div>

    3. 20000
<div align = "center">
<img src="../imagenes/u3.png" width="200">
</div>

    4. 35000
<div align = "center">
<img src="../imagenes/u4.png" width="200">
</div>

    5. 60000
<div align = "center">
<img src="../imagenes/u5.png" width="200">
</div>

<h2 align="center">

[[RETURN TO MENU]](https://github.com/UP210671/UP210671_CPP/blob/main/README.md#up210671_cpp) [[RETURN TO INDEX]](https://github.com/UP210671/UP210671_CPP/tree/main/U2#index)
<center> <h2>Exercise 2.Program for calculating a bonus based on an employee evaluation</h2> </center>
 <H1><span style="color:green">INPUT</span>
</h1>

 ```c++
 cout<<"¿What is your calification?"<<endl;
    cin>>c;
``` 
<H1><span style="color:purple">PROCESS</span>
</h1>

```c++
if ((c == 0)||(c == 0.4)||(c >= 0.6 && c <= 1)){
        if (c ==0 ){
            cout << "----------Unacceptable----------"<<endl;
        }
        else if (c == 0.4){
            cout << "----------Acceptable----------"<<endl;
        }
        else if (c >= 0.6 && c <= 1){
            cout << "----------Meritorious----------"<<endl;
        }
```
<H1><span style="color:red">OUTPUT</span>
</h1>

```c++
cout << "Your bonus is: $" << 2400*c<<endl;
        }
        else {
            cout << "----------Invalid rating----------"<<endl;
```
<H1><span style=color:#93EDC3>EXPLANATION</span>
</h1>

\
Employees are rated based on their work perfomance; this program is about giving the employees their deserved bonus based on their performance on different scalings; however, the rating must be 0.0, 0.4 or greater than 0.6, any other value is invalid. The bonus is a percentage equal to their performance where 100% percent is $2400 and 0% is $0. The program works this way:

 * Ask the user about their qualification on a scale on 0 to 1 (Where 1 is 100% and 0 is 0%).
 * If the user types a value other than 0, 0.4 or a number bigger than 0.6, the program does not run and it says that the qualification is invalid.
 * If the user types in a valid value, print out what level the employee has followed up by the bonus percentage and value.
  
<H1><span style=color:BROWN>TEST</span>
</h1>

* Unacceptable
<div align = "center">
<img src="../imagenes/a2.png" width="250">
</div>

* Acceptable
<div align = "center">
<img src="../imagenes/u5.png" width="200">
</div>

* Meritorius
<div align = "center">
<img src="../imagenes/u5.png" width="200">
</div>

* Invalid rating
<div align = "center">
<img src="../imagenes/u5.png" width="200">
</div>

[[RETURN TO MENU]](https://github.com/UP210671/UP210671_CPP/blob/main/README.md#up210671_cpp) [[RETURN TO INDEX]](https://github.com/UP210671/UP210671_CPP/tree/main/U2#index)

<center> <h2>Exercise 3.Game center customer price</h2> </center>
 <H1><span style="color:green">INPUT</span>

 ```c++
 cout<<"How old are you ? ";
 cin>>e;
 ```
<H1><span style="color:purple">PROCESS</span>
</h1>

```c++
if (e>=0){
        if (e>=0 && e<4){
            cout <<"----------Your payment is:  Free----------"<<endl;
        }
        else if (e>=4 && e<=18){
            cout << "----------Your payment is:  $5 pesos----------"<<endl;
        }
        else if (e>18){
            cout << "----------Your payment is  $10 pesos----------"<<endl;
        } 
```
<H1><span style="color:red">OUTPUT</span>

</h1>

```c++
}
        else {
            cout << "----------Invalid rating----------"<<endl;
    return 0;
}
```
<H1><span style=color:#93EDC3>EXPLANATION</span>
  </h1>

  The program is about pricing the entrance for the customer at a game center base on their age:
  

+0 years / FREE ENTRANCE 

4-18 years / $5

+18 years / $10

It works the following way:

- Ask the for the customer age.
- Based on the inputted value, declare a value for the price.
- Print out the customer data and price to pay
  - 3.1. If the user typed in an invalid response,print out a error message.
-Return 0 to check that the program ran succesfully.

<H1><span style=color:BROWN>TEST</span>
</h1>

* <3
    <div align = "center">
<img src="../imagenes/u5.png" width="200">
</div>
* 4-18
  
* +18

* Invalid