//Developert: Daniel Enrique Perdomo Carvajal 
#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //añade color en la terminal 
    system("color 02");
    //declarar variables 
    int hombres,mujeres,total_hombres,total_mujeres,total; 
    
    cout<<"Ingrese la cantidad de hombres:";
    cin>>hombres;
    cout<<endl;
    
    cout<<"Ingrese la cantidad de mujeres:";
    cin>>mujeres;
    cout<<endl;
    //operaciones 
    total=hombres+mujeres;
    
    cout<<"total de estudiantes:"<<total<<endl;
    
    total_hombres=hombres*100/total;
    
    
    total_mujeres=mujeres*100/total;
    //imprimir 
    cout<<"hombres:"<<total_hombres<<"%"<<endl;
    
    cout<<"mujeres:"<<total_mujeres<<"%"<<endl;
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
