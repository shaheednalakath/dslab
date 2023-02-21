/*
#include<stdio.h>
int i,j,n,vst[10]={0},cost[10][10],min,mincost=0;
int input(int n)
{

    printf("enter cost mx");
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {

            scanf("%d",&cost[i][j]);
        }
    }
    return 0;
}
int displaycostmx(int n)
{
     for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {

            printf("%d=>",cost[i][j]);

        }
        printf("\n");
    }
    return 0;

}
int prims(int n)
{
    int ne=1,a,b,u,v;

    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {

            if(cost[i][j]==0)
            {

                cost[i][j]=999;
            }
        }
    }
    vst[1]=1;
    while(ne<n)
    {

        for(i=1,min=999;i<=n;i++)
        {

            for(j=1;j<=n;j++)
            {

                if(cost[i][j]<min)
                {

                    if(vst[i] !=0)
                    {

                        min=cost[i][j];
                        a=u=i;
                        b=v=j;

                    }
                }
            }


        }
         printf("edges=%d,(%d,%d) cost=%d",ne++,a,b,min);
         mincost=mincost+min;
         vst[b]=1;
         cost[a][b]=cost[b][a]=999;
    }
    printf("%d",mincost);
    return 0;
}
int main()
{
    printf("enter number of vtx");
    scanf("%d",&n);
    input(n);
    displaycostmx(n);
    prims(n);

return 0;
}


*/
#include<stdio.h>
int n,micost=0,min;
int cost[10][10],i,j,vst[10]={0};
int createcostmx()
{
 printf("cost mx");
 for(i=1;i<=n;i++)
 {

     for(j=1;j<=n;j++)
     {

         scanf("%d",&cost[i][j]);
     }
 }

}
int displaycostmx()
{
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {

            printf("%d=>",cost[i][j]);
        }
        printf("\n");
    }
}
/*
int prims()
{
    int ne=1,a,b,u,v;

 for(i=1;i<=n;i++)
 {

     for(j=1;j<=n;j++)
     {

         if(cost[i][j]==0)
         {

             cost[i][j]=999;
         }
     }
 }
 vst[1]=1;
  while(ne<n)
  {

      for(i=1,min=999;i<=n;i++)
      {

          for(j=1;j<=n;j++)
          {

              if(cost[i][j]<min)
              {
                 if(vst[i] !=0)
                 {

                     min=cost[i][j];
                     a=u=i;
                     b=v=j;
                 }

              }
          }
      }
      printf("edges=%d,(%d,%d)cost =%d",ne++,a,b,min);
      micost=micost+min;
      vst[b]=1;
      cost[a][b]=cost[b][a]=999;
  }
  printf("%d",micost);
}*/
int prims(int n)
{
    int ne=1,a,b,u,v;

    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {

            if(cost[i][j]==0)
            {

                cost[i][j]=999;
            }
        }
    }
    vst[1]=1;
    while(ne<n)
    {

        for(i=1,min=999;i<=n;i++)
        {

            for(j=1;j<=n;j++)
            {

                if(cost[i][j]<min)
                {

                    if(vst[i] !=0)
                    {

                        min=cost[i][j];
                        a=u=i;
                        b=v=j;
                    }
                }
            }
        }
        printf("edges =%d(%d,%d) cost=%d",ne++,a,b,min);
        micost=micost+min;
        cost[a][b]=cost[b][a]=999;
    }
    printf("\n%d",micost);
}
int main()
{
 printf("enter number of vtx");
 scanf("%d",&n);
 createcostmx(n);
 displaycostmx(n);
 prims(n);
    return 0;
}
