/*0/*
Date:28/09/2022
Author: Cesar Eduardo Juarez Jasso
Email: UP210671@alumnos.upa.edu.mx
Descriptions:Exercise 3 
*/
/*#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int pp,ps,pv,pc,opcion;
    cout<<"What pizza with you chose?";
    cout<<"\nEstas opciones :     Vegetariana         o       Carnes Frias";    
    cin>>ps;
    cout<<"Estos son los ingredientes","\n","Tofu" ;

    
}
*/
/*
Date:28/09/2022
Author: Cesar Eduardo Juarez Jasso
Email: UP210671@alumnos.upa.edu.mx
Descriptions:Exercise 3 
*/
#include <iostream>
using namespace std;
int main(){
    int p,pe,i;
    
    cout<<"Tu pizza es vegetariana o de Carnes Frias ?\n Si tu pizza es vegetariana teclea: 1, si es de carnes frias teclea: 2 \n Tu seleccion es:";
    cin>>p;
    if (p==1){
        if (p==1){
            cout << "----------Estos son los ingredientes:      1-Pimiento       2-Tofu----------\nSeleccione el ingrediente con el numero que le corresponde:"<<endl;
            cin>>i;
            if (i=1){
                cout<<"Esta es tu pizza y estos son tus ingredientes: \n-Motzarela\n-Tomate-Pimiento\n-\n\n";
            }

            else if (i=2)
            {
                cout<<"Esta es tu pizza y estos son tus ingredientes: \n-Motzarela\n-Tomate\n-Tofu"<<endl;
                
            }
            
    }

}
    else {
            cout << "----------Estos son los ingredientes:      1-Pimiento       2-Jamon       3-Salmon -----------\nSeleccione el ingrediente con el numero que le corresponde:"<<endl;
            cin>>i;
    }
return 0;
}
