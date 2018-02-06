#include<conio.h>
#include<stdio.h>
void main()
{
int n,i,b=o;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
b++;
break;
}
}
if(b==1)
{
printf("prime");
}
else
{
printf("not prime");
}
getch();
}
