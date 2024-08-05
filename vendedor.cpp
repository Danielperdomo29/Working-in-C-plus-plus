//developert:Daniel enrique perdomo carvajal 
#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{   
    //añade color a la terminal 
    system("color 02");
    
    //variables 
    double sueldo,comision,ventas,total;
    cout<<"__________________________"<<endl;
    cout<<"Sueldo base del vendedor:";
    cin>>sueldo;
    cout<<"__________________________"<<endl;
    
    //salto de linea en la terminal 
    cout<<"";
    cout<<endl;
    
    //operacion sacar el 10% del sueldo base 
    comision=sueldo*10/100;
    
    //imprimir 
    cout<<"10% de comision por sus ventas es:"<<comision<<"$";
    cout<<endl;
    
    //salto de linea en la terminal 
    cout<<"";
    cout<<endl;
    
    cout<<"cuantas items a vendido:";
    cin>>ventas;
    cout<<endl;
    

    //operacion sacar el total de las ganacia 
    total=comision*ventas+sueldo;
    
    
    //imprimir 
    cout<<"total de sueldo base mas comision:"<<total<<"$";
    cout<<endl;
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
