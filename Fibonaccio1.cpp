#include <cstdlib>
#include <iostream>

using namespace std;

int main()
    {
    int a,x,y,z,i;
    cout<<endl<<"Ingrese el limite:";
    cin>>a;
    
    x=0;
    y=1;
    z=1;
    
    for(i=1; i<=a; i++)
                     {
                         cout<<i<<""<<z<<""<<x<<""<<y<<endl;
                         z=x+y;
                         x=y;
                         y=z;
          
          
          
                     }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
    }
