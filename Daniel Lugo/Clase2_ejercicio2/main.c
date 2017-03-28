#include <stdio.h>
#include <stdlib.h>
int suma(int a, int b);
int main()
{
int x,y,z;
printf("ingrese numero a sumar: ");
scanf("%d",&x);
printf("ingrese numero a sumar: ");
scanf("%d",&y);
z=suma(x,y);
printf("La suma es %d",z);
}
int suma(int f, int g)
{
int total;
total=f+g;
return total;
}
