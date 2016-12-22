#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,sum=0;
printf("\n enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
sum=sum+i;
printf("\n the sum of n natural number is %d",sum);
return 0;
}
