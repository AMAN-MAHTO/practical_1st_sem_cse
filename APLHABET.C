/*check whether char is alphabet or not using conditional op*/

#include<stdio.h>
#include<conio.h>
main(){
clrscr();

char c;
printf("enter the char: ");
scanf("%c",&c);
// a -- z ascii small alpha
// A -- Z ascii big alpha
((c>='a' && c<='z') || (c>='A' && c<='Z'))
?printf("%c is an aplhabet\n",c)
:printf("%c is not an alphabet\n",c);

getch();
}