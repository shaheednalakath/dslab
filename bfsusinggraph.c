#include<stdio.h>
int num_vtx;
void printGraph(int adjmx[num_vtx][num_vtx])
{

    for(int i=0;i<num_vtx;i++)
    {

        for(int j=0;j<num_vtx;j++)
        {

            printf("%d",adjmx[i][j]);



        }
    }
}

void bfs(int adj[num_vtx][num_vtx],int start)
{

    int vst[num_vtx],queue[num_vtx],front =-1,rear=-1;
    for(int i=0;i<num_vtx;i++)
    {

        vst[i]=0;
    }
    front++;
    queue[++rear]=start;
    vst[start]=1;
    while(front<=rear)
    {

        start=queue[front++];
        printf("%d",start);
        for(int i=0;i<num_vtx;i++)
        {

            if(adj[start][i]==1 && vst[i]!= 1)
            {


                queue[++rear]=i;
                vst[i]=1;
            }
        }
    }
}
void dfs(int adj[num_vtx][num_vtx],int start)
{

   int visted[num_vtx],stack[num_vtx],top=-1;
   for(int i=0;i<num_vtx;i++)
   {

       visted[i]=0;
   }
   stack[++top]=start;
   visted[start]=1;
   while(top != -1)
   {

       start=stack[top--];
       printf("%d",start);
       for(int i=0;i<num_vtx;i++)
       {

           if(adj[start][i]&&visted[i]==0)
           {

               stack[++top]=i;
               visted[i]=1;
               break;
           }
       }

   }

}
int main()
{

    int s,d;
    printf("enter number of vtx");
    scanf("%d",&num_vtx);
    int adjmx[num_vtx][num_vtx];
    for(int i=0;i<num_vtx;i++)
    {

        for(int j=0;j<num_vtx;j++)
        {

            adjmx[i][j]=0;
        }
    }
    while(s != -1 && d != -1)
    {

        printf("enter edges 0->%d",num_vtx-1);
        scanf("%d %d",&s,&d);
        adjmx[s][d]=1;
        adjmx[d][s]=1;
    }
    int st;
    printf("enter start");
    scanf("%d",&st);
    bfs(adjmx,st);
    dfs(adjmx,st);
    return 0;
}
