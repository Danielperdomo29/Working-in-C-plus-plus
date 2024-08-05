//Developert:Daniel Enrique Perdomo Carvajal 
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
 //añade color a la terminal 
 system("color 02");
 cout<<"si lees esto eres hermosa"<<endl;
 //declaro las variables 
 int a,absoluto;
 //imprimir 
 cout << "Ingrese un numero:";
 //entrada variable a 
 cin >> a;
 cout<<endl;
 //operacion para sacar valor absoluto
 absoluto = abs(a);
 //imprimir resultado 
 cout << "El absoluto de " << a << " es " << absoluto<<endl;
 //añado ciclo for que me genere numeros el 0 a 9
 for(int i = 0; i < 10; i++)
 {
 a = rand()%10 - 6;
 //imprimir el valor absoluto de diez numeros 
 cout<<"_____________________"<<endl;
 cout << "El absoluto de " << a << " es: " << abs(a) << endl;
 cout<<"_____________________"<<endl;
 }
    system("PAUSE");
    return EXIT_SUCCESS;
}


