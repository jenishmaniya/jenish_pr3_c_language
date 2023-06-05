#include<stdio.h>
#include<conio.h>
void main(){
int a;
int i=0;
clrscr();
printf("Enter the value of A:");
scanf("%d",&a);
while(a!=0){
a/=10;
i++;
}
printf("Ans is:%d\n",i);
getch();
}