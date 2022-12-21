#include<stdio.h>
#include<conio.h>

main(){
clrscr();

int a= 18;
double b = 7.56;
int res = a+b;  // implicite conversion int 18 --> double 18.00
printf("%d\n",res);//explicite conversion res 25.56 --> int res 25

char c = 'A';
int d = 9;
printf("%d",c+d); // implicite conversion c = 'A' --> ASCII value of A --> 65




getch();
}