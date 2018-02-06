#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,s=0;
printf("enter the value of n");
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=s+(r*r*r);
n=n/10;
}
if(n==s)
{
printf("armstrong");
}
else
{
printf("not armstrong");
}
getch()
}
