#include<iostream.h>
#include<iostream.h>
#include<conio.h>


void main()
{int n;
 float s=0,den=2,num=1;
 clrscr();
 cout<<"Ingresar limite:";
 cin>>n;
 cout<<endl;
 for(int c=0;c<n;c++)
 {cout<<num<<"/"<<den<<" ";
 s= s + (num/den);
 num=num+1;
 den=den+1;
 }
 cout<<"La suma es:"<<s;
 getch();
 }

    
    system("PAUSE");
    return EXIT_SUCCESS;
}


