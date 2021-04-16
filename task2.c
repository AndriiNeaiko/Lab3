#include <stdio.h> //Підключення бібліотек
#include <math.h>
#include "rlutil/rlutil.h"
 int main () {
   int d1,d2,d3;
   printf ("\nВведіть 3 цілих числа: \n"); 
   printf ("Введіть 1 число: ");
   scanf ("%d", &d1);
   printf ("Введіть 2 число: ");
   scanf ("%d", &d2);
   printf ("Введіть 3 число: ");
   scanf ("%d", &d3);
   if (d1>d2 && d2>d3){
     setColor (GREEN);
     printf ("Дані числа утворюють спадну послідовність\n");
     setColor (WHITE);
     printf ("Числа з протилежними знаками: ");
     setColor (GREEN);
     printf ("%d, %d, %d", d1*-1, d2*-1, d3*-1);
     setColor (WHITE);

   }
   else if (d1<d2 && d2<d3){
     setColor (GREEN);
     printf ("Дані числа утворюють зростаючу послідовність\n");
     setColor (WHITE);
     float x=pow (d1,2) + pow (d2,2) + pow (d3,2);
     printf ("Сума квадратів даних чисел: ");
     setColor (GREEN);
     printf ("%.2f",x);
     setColor (WHITE);
   }
   else{
     setColor (RED);
     printf ("Дані числа не утворюють ні спадну ні зростаючу послідовність");
     setColor (WHITE);



   }




















   return 0;


































 }
