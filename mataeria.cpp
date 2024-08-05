//Develoepert:Daniel Enrique Perdomo Carvajal 
#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   //declarar variables
   float examen,tareas,totale,totalt,total;
   //añadirle color a la terminal 
   system("color 02");
   //imprimir
   cout<<"      variable compleja       "<<endl;
   cout<<"______________________________"<<endl;
   cout<<"Digite la nota del examen:";
   //entrada 
   cin>>examen;
   cout<<"Digite la nota de tareas:";
   //entrada 
   cin>>tareas;
   cout<<"______________________________"<<endl;
   //operacion sacar el promedio 
   totale=examen*60/100;
   totalt=tareas*40/100;
   total=totale+totalt;
   //imprimir resultado 
   cout<<"______________________________"<<endl;
   cout<<"su promedio es:"<<total<<endl;
   cout<<"______________________________"<<endl;
   
   //----------------------------------------------
   
   //imprimir
   cout<<"      Metodos numericos       "<<endl;
   cout<<"______________________________"<<endl;
   cout<<"Digite la nota del examen:";
   //entrada 
   cin>>examen;
   cout<<"Digite la nota de tareas:";
   //entrada 
   cin>>tareas;
   cout<<"______________________________"<<endl;
   //operacion sacar el promedio 
   totale=examen*70/100;
   totalt=tareas*30/100;
   total=totale+totalt;
   //imprimir resultado 
   cout<<"______________________________"<<endl;
   cout<<"su promedio es:"<<total<<endl;
   cout<<"______________________________"<<endl;
   
   //----------------------------------------------
   
   //imprimir
   cout<<"            quimica           "<<endl;
   cout<<"______________________________"<<endl;
   cout<<"Digite la nota del examen:";
   //entrada 
   cin>>examen;
   cout<<"Digite la nota de tareas:";
   //entrada 
   cin>>tareas;
   cout<<"______________________________"<<endl;
   //operacion sacar el promedio 
   totale=examen*80/100;
   totalt=tareas*20/100;
   total=totale+totalt;
   //imprimir resultado 
   cout<<"______________________________"<<endl;
   cout<<"su promedio es:"<<total<<endl;
   cout<<"______________________________"<<endl;
   
   //----------------------------------------------
   
   //imprimir
   cout<<"            Fisica            "<<endl;
   cout<<"______________________________"<<endl;
   cout<<"Digite la nota del examen:";
   //entrada 
   cin>>examen;
   cout<<"Digite la nota de tareas:";
   //entrada 
   cin>>tareas;
   cout<<"______________________________"<<endl;
   //operacion sacar el promedio 
   totale=examen*70/100;
   totalt=tareas*30/100;
   total=totale+totalt;
   //imprimir resultado 
   cout<<"______________________________"<<endl;
   cout<<"su promedio es:"<<total<<endl;
   cout<<"______________________________"<<endl;
   
   
   
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
