//Developer: Daniel Enrique Perdomo Carvajal 
#include<iostream>
#include<string>
using namespace std;
int main()
{
    system("title Calcula el salario de un trabajador");
    string apno;
    float hrtr,tahr,subt,boni,tota;
    cout<<"Calculos de pagos\n\n";
    cout<<"Nombres:\t";cin>>apno;
    cout<<endl<<endl<<"Horas Trabajadas:\t";cin>>hrtr;
    if (hrtr<=0)
        cout<<"No trabajo nada"<<endl;else
    {cout<<"Tarifa por hora:\t";cin>>tahr;
    subt=hrtr*tahr;
    if(hrtr>192)
        boni=subt*0.05;
    else
        boni=subt*0.03;
    tota=subt+boni;
    cout<<"El sub total es:\t"<<subt<<endl;
    cout<<"La bonifiacion es:\t"<<boni<<endl;
    cout<<"El total a pagar es:\t"<<tota<<endl<<endl;
    }cin.ignore(); 
    system("pause");

               return EXIT_SUCCESS;
}

