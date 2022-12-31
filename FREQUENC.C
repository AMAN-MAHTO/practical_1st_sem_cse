/*wap to find frequency of each digit in a given number*/

#include<stdio.h>
#include<conio.h>
main(){
clrscr();
int n,rem,i,a[10]={0};
printf("enter the n: ");
scanf("%d",&n);
while(n>0){
rem = n%10;
a[rem] += 1;
n /= 10;
}
for (i=0;i<10;i++){
if (a[i] != 0){
printf("%d - %d\n",i,a[i]);}
}

getch();
}