 #include<stdio.h>
 int n,i,j,k,m;
 int main(){

     printf("enter size of f array");
     scanf("%d",&n);
     printf("enter size of f array");
     scanf("%d",&m);
     int a[n],b[n],ab[n+m];
     printf("enter element to array");
     for(i=0;i<n;i++)
     {

         scanf("%d",&a[i]);
     }
     printf("enter elemet to secont array");
     for(j=0;j<m;j++)
     {

         scanf("%d",&b[j]);
     }
     i=0;
     j=0;
     k=0;
     while(i<n && j<m)
     {

         if(a[i]<b[j])
         {

             ab[k]=a[i];
             i++;
             k++;

         }
         else{
            ab[k]=b[j];
            j++;
            k++;
         }
     }
     if(i>=n)
     {

         while(j<m)
         {

             ab[k]=b[j];
             k++;
             j++;
         }
     }
     if(j>=m)
     {

         while(i<n)
         {

             ab[k]=a[i];
             k++;
             i++;

         }
     }
     printf("sorted array is");
     for(i=0;i<n+m;i++)
     {

         printf("%d",ab[i]);
     }
     return 0;
 }
