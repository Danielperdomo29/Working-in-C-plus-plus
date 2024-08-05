#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<("Ingresa un primer numero ")<<endl;
    cin>>a;
    if(a%2==0 && a<=10){
        cout<<a<<" es par y esta en el rango";
    }else{
        cout<<a<<" es impar esta en el rango";
    }
     cout<<("Ingresa segundo numero ")<<endl;
    cin>>b;
        if(b<=100){
        cout<<b<<" el numero es menor  igual que 100";
    }else{
        cout<<b<<" el numero es mayor que 100";
    }
     cout<<("Ingresa un tercer numero ")<<endl;
    cin>>c;
            if(c<a && c<b){
        cout<<c<<" el numero es menor que numero 1 y 2";
    }else{
        cout<<c<<" el numero es es mayor que elnumero 1 y 2";
    }
                system("pause");
               return EXIT_SUCCESS;
}
