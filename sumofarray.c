#include<stdio.h>
int main()
{
int i,n;
printf("enter size of array");
scanf("%d",&n);
int a[n];
int sum=0;
printf("enter element to array");
for(i=1;i<=n;i++)
{
 sum=sum+i;
}
printf("sum is %d",sum);
return 0;
}
