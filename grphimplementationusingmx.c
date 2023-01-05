/*#include<stdio.h>
int num_vtxc;
int dd(int adjmx[num_vtxc][num_vtxc])
{



    for(int i=0;i<num_vtxc;i++)
    {

        for(int j=0;j<num_vtxc;j++)
        {

            printf("%d",adjmx[i][j]);
        }
        printf("\n");

    }
}
int main()
{
    int src,dest;
    printf("enter vxt");
    scanf("%d",&num_vtxc);
    int adjmx[num_vtxc][num_vtxc];
    for(int i=0;i<num_vtxc;i++)
    {
         for(int j=0;j<num_vtxc;j++)
         {

              adjmx[i][j]=0;
         }

    }






    while(src != -1 && dest != -1)
    {

        printf("enter an edge from node (0 to %d) to node (0 to %d):",num_vtxc,num_vtxc);
        scanf("%d %d",&src,&dest);
        adjmx[src][dest]=1;
        adjmx[dest][src]=1;
    }


    dd(adjmx);

    return 0;
}

*/
#include<stdio.h>
int num_vtx;
int adjmxprint(int adjmx[num_vtx][num_vtx])
{

    for(int i=0;i<num_vtx;i++)
    {

        for(int j=0;j<num_vtx;j++)
        {

            printf("%d ",adjmx[i][j]);

        }
        printf("\n");
    }
}
int main()
{
 int sourc,dest;
 printf("enter numbers of vtx");
 scanf("%d",&num_vtx);
 int adjmx[num_vtx][num_vtx];
 for(int i=0;i<num_vtx;i++)
 {

     for(int j=0;j<num_vtx;j++)
     {

         adjmx[i][j]=0;
     }

 }
 while(sourc != -1 && dest != -1)
 {

     printf("enter a edge from %d->%d",num_vtx,num_vtx);
     scanf("%d %d",&sourc,&dest);
     adjmx[sourc][dest]=1;
     adjmx[dest][sourc]=1;
 }
adjmxprint(adjmx);
dfs(0);
    return 0;
}
