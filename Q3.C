#include<stdio.h>
#include<conio.h>
void main(){
int n;
int a;
int b;
int sum;
clrscr();
printf("Enter the valuen of A:");
scanf("%d",&n);
a=n;
while(a>=10){
a=a/10;
}
b=n%10;
sum=a+b;
printf("The sum is:%d",sum);
getch();
}