#include<stdio.h>
#include<conio.h>
main(){
clrscr();
int n;
scanf("%d",&n);
if (n%100 !=0){
    if (n%4 == 0){
	printf("lpy");
	}
    else{
	printf("nlyp");}
}
else{
    if (n%400==0){
	printf("nlyp");}
    else{
	printf("nlyp");}
}
getch();
}