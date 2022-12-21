#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
clrscr();
float r,pi=3.14159265359;
printf("enter radius of circle:");
scanf("%f",&r);
printf("Area of circle: %f", pi*(pow(r,2)));
printf("circumfarence of circle:%f", 2*pi*r);


getch();
}