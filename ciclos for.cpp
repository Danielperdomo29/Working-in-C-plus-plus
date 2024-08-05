//develoeprt:Daniel Enrique Perdomo Carvajal 
#include <stdlib.h>
#include <time.h>
#include<iostream>

using namespace std;
int main()
{
//calcule el promedio de 50 valores
//determinar cuantos son mayores que el promedio 
//imprimir el promedio
//imprimir cuales son los datos mayores que el promedio 


    system("color 02");
    int nota[50],total=0,promedio,mayor=0,totalm=0;
    
    srand(time(NULL));
    cout<<"_____________________________________\n";
    cout<<"\ncalcular el promedio de 50 valores\n" ;
    cout<<"_____________________________________\n";
    for(int i = 1; i <= 50; i++)
    {
        nota[i] = 10 + rand() % (50 - 10);
        
        cout<<"Nota["<<i<<"]: "<<nota[i]<<endl;
  
        total=total+nota[i];
        promedio=total/50;
        
    
    }
    cout<<"_____________________________________"<<endl;
    cout<<"Notas superiores al promedio:"<<endl;
    cout<<"_____________________________________"<<endl;
    
    for (int i=1;i<=50;i++){
    if (nota[i]>promedio){
        cout<<nota[i]<<endl;
    
  }
    }
    
    for (int i=1;i<=50;i++){
    if (nota[i]>promedio){
        totalm=totalm+1;
        nota[i];
  }
    }
    
    
        
    cout<<"_____________________________________\n";
    cout<<"\nLa suma de todas las notas es:"<<total<<endl;
    cout<<"_____________________________________\n";
    cout<<"\nPromedio:"<<promedio<<endl;
    cout<<"_____________________________________\n";
    cout<<"\nnumero mayores que el promedio:"<<totalm<<endl;
    cout<<"_____________________________________\n";
    


    
    
    system("pause");
    

    
    return 0;
}
