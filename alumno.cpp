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
    double parciales,examen,trabajo,nota,a,b,c;
    
    cout<<endl;
    cout<<"_____________________________________________________"<<endl;
    cout<<"55% del promedio de sus tres calificaiones parciales:";
    cin>>parciales;
    cout<<"30% de la calificacion del examen final:";
    cin>>examen;
    cout<<"15% calificacion de un trabajo final:";
    cin>>trabajo;
    cout<<"_____________________________________________________"<<endl;
    
    //operacion 
    a=parciales*55/100;
    b=examen*30/100;
    c=trabajo*15/100;
    nota=a+b+c;
    //imprimir
    cout<<"nota:"<<nota;
    cout<<endl;
    
    
    
    //salto de linea en la terminal 
    cout<<"";
    cout<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
