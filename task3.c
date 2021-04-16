#include <stdio.h> //Підключення бібліотек
#include "rlutil/rlutil.h"
int main () {
  int index;
  printf ("Введіть поштовий індекс: ");
  scanf ("%d", &index);
  setColor (GREEN);
  switch (index){
    case 29015: printf ("Хмельницький"); break;
    case 79007: printf ("Львів"); break;
    case 59000: printf ("Сторожинець"); break;
    case 65125: printf ("Одеса"); break;
    case 14039: printf ("Чернігів"); break;
    case 69061: printf ("Запоріжжя"); break;
    case 78203: printf ("Коломия"); break;
    case 43024: printf ("Луцьк"); break;
    case 58012: printf ("Чернівці"); break;
    case 60400: printf ("Глибока"); break;
    default:setColor (RED); printf ("Ви ввели невідомий індекс");
  }
  setColor (WHITE);
}
