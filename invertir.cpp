//developert:Daniel Enrique Perdomo Carvajal 
#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //variables 
    int a,b,c,y,x,z,total;
    //añade color a la terminal 
    system("color 02");
    //imprimir 
    cout<<"____________"<<endl;
    cout<<"inversor 1:";
    cin>>a;
    cout<<"inversor 2:";
    cin>>b;
    cout<<"inversor 3:";
    cin>>c;
    cout<<"____________"<<endl;
    
    //obtener el % de cada inversor respecto al total 
    
    total=a+b+c; 
    cout<<"total de la inversion:"<<total<<endl;
    
    y=a*100/total;
    x=b*100/total;
    z=c*100/total;
    cout<<"____________"<<endl;
    cout<<"% invertida 1:"<<y<<"%"<<endl;
    cout<<"% invertida 2:"<<x<<"%"<<endl;
    cout<<"% invertida 3:"<<z<<"%"<<endl;
    cout<<"____________"<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
