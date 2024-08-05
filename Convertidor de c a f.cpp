//Developer: Daniel Enrique Perdomo Carvajal 
#include <iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Selecciona una conversion"<<endl;
    cout<<"1. °C  a  °F"<<endl;
    cout<<"2. °F  a  °C"<<endl;
    cout<<"3. Juegos "<<endl;
    cin>>n;
     if(n==1){
          float c;
          cout<<"Ingresa grados centigrados"<<endl;
          cin>>c;
          double f=(c*9/5)+(32);
          cout<<c<<"C equivale a "<<f<<"°F";
      }else{
          float f;
          cout<<"Ingresa grados fahrenheit"<<endl;
          cin>>f;
          double c=(f-32)*5/9;
          cout<<f<<"F equivale  a "<<c<<"°C";
          
               
      }
               system("pause");
               return EXIT_SUCCESS;

}
