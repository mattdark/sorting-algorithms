#include <stdio.h>

int bubblesort(int lista[], int n);
void main(void)
 {
  int i, lista[10] = {20,30,40,90,50,60,70,80,100,110};
  bubblesort(lista,10);
  for(i=0;i<10;i++)
   {
    printf("%i ",lista[i]);
   }
 }
int bubblesort(int lista[],int n)
 {
  n=n-1;
  int temp, x, i;
  for(x=n;x>=0;x--)
   {
    for(i=0;i<x;i++)
     {
      if(lista[i]>lista[i+1])
       {
        temp = lista[i];
        lista[i] = lista[i+1];
        lista[i+1] = temp;
       }
     }
   }
 }
