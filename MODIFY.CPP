#include<stdio.h>
#include<conio.h>
main(){
clrscr();
int a=10,ans;
printf("a = %d \n",a);
ans = a++; //post incr.
printf("a = %d and a++ = %d\n",a,ans);

ans = a--; //post dec.
printf("a = %d and a-- = %d\n",a,ans);

ans = ++a; //pre incr.
printf("a = %d and ++a = %d\n",a,ans);

ans = --a; //pre dec.
printf("a = %d and --a = %d\n",a,ans);

getch();
}