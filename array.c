#include<stdio.h>
int main()
{
int i,n;
printf("enter size of array");
scanf("%d",&n);
int a[n];
printf("enter element to array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("array elements are");
for(i=0;i<n;i++){
printf("%d",a[i]);
}
return 0;
}
