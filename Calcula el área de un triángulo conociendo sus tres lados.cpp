//Developer: Daniel Enrique Perdomo Carvajal

#include <iostream.h>

#include <conio.h>

#include <math.h>	//Reconoce la ra�z mediante la funci�n "sqrt"

main()

{
system("title Calcula el �rea de un tri�ngulo conociendo sus tres lados");
float a,b,c;	/*Se define el tipo de dato_entrada*/

float p,at;	/*Se define el tipo de dato_salida*/

cout<<"Ingrese el valor del lado a: ";cin>>a;

cout<<"Ingrese el valor del lado b: ";cin>>b;

cout<<"Ingrese el valor del lado c: ";cin>>c;

p=(a+b+c)/2.0;

at=sqrt(p*(p-a)*(p-b)*(p-c));

cout<<at;

getch();

}

