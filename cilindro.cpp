//developert:Daniel Enrique Perdomo Carvajal 
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdio.h>
using namespace std;

int main()
{
    //añade color a la terminal 
    system("color 02");
    //declarar variables 
    float r,h;
    //imprimir 
    cout<<"______________"<<endl;
    cout<<"Ingresa radio:";
    cin>>r;
    cout<<"Ingresa altura:";
    cin>>h;
    cout<<"______________"<<endl;
    
    //operacion area 
    double area = 2*3.14159265*r*(r+h);
    //imprimir resultado 
    cout<<"el area de un cilindro es:"<<area<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
