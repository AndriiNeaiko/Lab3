#include <stdio.h> //Підключення бібліотек
#include <math.h>
#include "rlutil/rlutil.h"

int main() {
  int n;
  float x,y,z;
  printf ("\nЯким методом ви бажаєте виконати програму?\n"); // Методи
  printf ("\n**************************************************\n");
  printf ("З використанням скороченої форми оператора розгалуження if введіть 1\n");
  printf ("З використанням повної форми оператора розгалуження if ... else або за необхідності вкладення if...else if введіть 2\n");
  printf ("Вийти з програми введіть 3\n");
  printf ("**************************************************\n");

  printf ("Введіть: ");
  scanf ("%d",&n);

  if (n==1){
   printf ("\nВведіть y: ");
   scanf ("%f",&y);
   printf ("Введіть z: ");
   scanf ("%f",&z);
   if (y==-8) {
     if (z-2*y==0){
       setColor (RED);
       printf ("Виконується ділення на 0");
       setColor (WHITE);

     }
     else if (y/(z-2*y)<0){
       setColor (RED);
       printf ("Виконується добування кореня з мінусового числа");
       setColor (WHITE);

     }
     else {         //Обчислення
       x=sqrt(3*(y/(z-2*y)))-y*z;
       printf ("Результат: %.2f",x);
     }

   }
   if (y==10){
     x=(y/2)+15*z;
     printf ("Результат: %.2f",x);
   }
   if (y==2){
     x=y*z-7*z;
     printf ("Результат: %.2f",x);
   }
   if (y!=-8 && y!=10 && y!=2){
     setColor (RED);
     printf ("Ви ввели некоректне значення y");
     setColor (WHITE);

   }
  }
  else if (n==2){
    printf ("\nВведіть y: ");
    scanf ("%f",&y);
    printf ("Введіть z: ");
    scanf ("%f",&z);
    if (y==-8) {
      if (z-2*y==0){
        setColor (RED);
        printf ("Виконується ділення на 0");
        setColor (WHITE);

      }
      else if (y/(z-2*y)<0){
        setColor (RED);
        printf ("Виконується добування кореня з мінусового числа");
        setColor (WHITE);

      }
      else {
        x=sqrt(3*(y/(z-2*y)))-y*z;
        printf ("Результат: %.2f",x);
      }

    }
    else if (y==10){
      x=(y/2)+15*z;
      printf ("Результат: %.2f",x);
    }
    else if (y==2){
      x=y*z-7*z;
      printf ("Результат: %.2f",x);
    }
    else {
      setColor (RED);
      printf ("Ви ввели некоректне значення y");
      setColor (WHITE);

    }

  }
}
