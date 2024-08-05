//Developert: Daniel Enrique Perdomo C.
#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{    
    //añade color a la terminal 
    system("color 02");
    //variables 
    double compra,descuento,item,total;
    
    cout<<"_____________________________"<<endl;
    cout<<"digite el total de su compra:";
    cin>>compra;
    cout<<"_____________________________"<<endl;
    
    //salto de linea en la terminal 
    cout<<"";
    cout<<endl;
    
    //operacion sacar el 15% del sueldo base 
    descuento=compra*15/100;
    
    //imprimir 
    cout<<"15% de descuento por sus ventas es:-"<<descuento<<"$";
    cout<<endl;
    
    //salto de linea en la terminal 
    cout<<"";
    cout<<endl;
    
    //operacion sacar el total de lo que tiene que pagar  
    total=compra-descuento;
    
    
    //imprimir 
    cout<<"total que pagar + el descuento:"<<total<<"$";
    cout<<endl;
    

    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
