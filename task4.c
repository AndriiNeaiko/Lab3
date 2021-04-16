#include <stdio.h> //Підключення бібліотек
#include <math.h>
#include "rlutil/rlutil.h"
  int main (){
    float x,y,z;
    printf ("Введіть 3 цілих числа\n");
    printf ("Введіть число х: ");
    scanf ("%f", &x);
    printf ("Введіть число у: ");
    scanf ("%f", &y);
    printf ("Введіть число z: ");
    scanf ("%f", &z);
    if (exp(-x-2)+1/(pow (x,2)+4)==0){
      setColor (RED);
      printf ("Ви ввели неправильне значення х (Виконується ділення 0)");
      setColor (WHITE);
      }
    else {
      float a = (1+y) * ( (x+ (y/ (pow(x, 2) + 4))) / (exp(-x-2) + (1 / (pow(x,2) + 4))) ); 
      printf ("Відповідь: %.2f",a);
}














  }
