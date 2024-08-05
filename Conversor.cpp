#include <iostream>
#include <cstdlib>
//Developer: Daniel Enrique Perdomo Carvajal 
#include <stdio.h>
 
using namespace std;
 
int main()
{
 

 
    double num;
    int opt;
    system("Nivel de feminidad de liz !");
    cout << "Developert Daniel Enrique Perdomo Carvajal\n#Conversor Universidad SurColombiana\n\nConvertir:\n1. Centigrados/Celsius a Farenheit\n2. Farenheit a Centigrados/Celsius\n3. Farenheit a Kelvin\n4. Kelvin a Farenheit\n5. Kelvin a Centigrados/Celsius\n6. Centigrados/Celsius a Kelvin\n0. Salir\n\nOpcion: ";
    cin >> opt;
    if(opt==1){
               cout << "Escribe los Grados Centigrados/Celsius: ";
               cin >> num;
               cout << "\n " << num << " Grados Centigrados/Celsius son " << (num + 32) * 1.8 << " Grados Farenheit." << endl;
               system("pause");
               }
    if(opt==2){
               cout << "Escribe los Grados Farenheit: ";
               cin >> num;
               cout << "\n " << num << " Grados Farenheit son " << (num - 32) / 1.8 << " Grados Centigrados/Celsius." << endl;
               system("pause");
               }
    if(opt==3){
               cout << "Escribe los Grados Farenheit: ";
               cin >> num;
               cout << "\n " << num << " Grados Farenheit son " << (num + 459.67) / 1.8 << " Grados Kelvin." << endl;
               system("pause");
               }
    if(opt==4){
               cout << "Escribe los Grados Kelvin: ";
               cin >> num;
               cout << "\n " << num << " Grados Kelvin son " << (num * 1.8) - 459.67 << " Grados Farenheit." << endl;
               system("pause");
               }
    if(opt==5){
               cout << "Escribe los Grados Kelvin: ";
               cin >> num;
               cout << "\n " << num << " Grados Kelvin son " << (num - 273.16) << " Grados Centigrados." << endl;
               system("pause");
               }
    if(opt==6){
               cout << "Escribe los Grados Centigrados/Celsius: ";
               cin >> num;
               cout << "\n " << num << " Grados Centigrados/Celsius son " << num + 273.16 << " Grados Kelvin." << endl;
               system("pause");
               }
    if(opt==0){
               cout << "Hasta la proxima." << endl;
               system("pause");
               return EXIT_SUCCESS;
}
}
