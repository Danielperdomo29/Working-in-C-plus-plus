#include<stdio.h>
  #include<conio.h>

  void show(int b[], int tam){

  for (int i=0; i<tam; i++)

    printf(b[i], " ");

  }

  int main (){

      const tam 20;
      int a[tam];   
      int suma;
      int mayor =0;
      int menor=9999999999999999;

      for (int j =0; j<tam; j++ ){

        a[j]=  1 + rand()% 100;
        //a cada vuelta cumulamos el valor obtenido
        suma= suma + a[j];

        //evaluamos si el numero es mayo y lo almacenamos en la variable
        if (a[j] > mayor) {
            mayor = a[j];
        }
        //evaluamos si el numero es menor y lo almacenamos
        if (a[j] < menor) {
            menor = a[j];
        }
      }
      //obtenemos la media dividiendo la suma total entre la cantidad de elementos
      double media = suma / a.length
      printf("La media es igual a: %d", media);
      printf("El numero mayor es: %d", mayor);
      printf("El numero menor es: %d", menor);


      show(a, tam);//name and size

      getch();
      return 0;
  }
