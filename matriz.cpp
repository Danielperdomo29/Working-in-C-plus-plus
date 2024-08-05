#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include<time.h> //libreria para poder utilizar (srand(time(NULL)))


using namespace std;

int main()
{
    
 int bidimension[1][1];
 int a,b,suma=0;
 srand(time(NULL));
 

  cout <<"Matriz de: ";
  cin>>a;
  cout <<"Matriz por: ";
  cin>>b;

  while (a<5 || b<6 || a>100 || b>100)
  {
  system("cls");//limpiar pantalla para windows
  //system("clear");//limpiar para linux

  cout <<"Matriz debe ser como minimo 5x6 y como maximo 100x100: "<<endl;
  cout <<"Matriz de: ";
  cin>>a;
  cout <<"Matriz por: ";
  cin>>b;
  }
   bidimension[a][b];


   for(int i=0;i<a;i++){//for 1
    for(int j=0;j<b;j++){//for 2
     
      bidimension[i][j] =10 + rand()%(100-10); //numero aleatorio entre 10 y 99 GUARDANDO 
      suma=suma+bidimension[i][j];   //sumando cada unos de los numeros
     
    }
   }
   
   //impresion de datos
   for(int i=0;i<a;i++){//for 1
    for(int j=0;j<b;j++){//for 2
     cout<<bidimension[i][j];
     if(j+1==b){cout<<endl;}
     else{cout<<",";}
    }
   }


 //impresion de los datos
 cout <<"Sumatoria de todos los numeros: "<< suma <<endl;
 cout <<"Promedio de los numeros: "<< suma/(a*b) <<endl;
 cout <<"Presione cualquier tecla para salir";
 getch();//pausa para mostrar datos
    return 0; 
    

	}
