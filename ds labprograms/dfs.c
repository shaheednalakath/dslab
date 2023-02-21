
#include<stdio.h>
int start,n,ch;
/*int dfs(int adjmx[n][n],int vtsmx[n],int start)
{
  int stack[n],top=-1,i;
  for(i=0;i<n;i++)
  {

      vtsmx[i]=0;
  }
  stack[++top]=start;
  vtsmx[start]=1;
  while(top !=-1)
  {

      start=stack[top--];
      printf("%c",65+start);
      for(i=0;i<n;i++)
      {

          if(vtsmx[i]==0 && adjmx[start][i]==0)
          {

              stack[++top]=i;
              vtsmx[i]=1;
          }
      }
  }
}
*/
void dfs(int adjmx[n][n],int vstmx[n],int start)
{

    int top=-1,i;
    int stack[n];
    for(i=0;i<n;i++)
    {

        vstmx[i]=0;

    }
    stack[++top]=start;
    vstmx[start]=1;
    while(top != -1)
    {

        start=stack[top--];
        printf("%c",start+65);
        for(i=0;i<n;i++)
        {

            if(vstmx[i]==0 && adjmx[start][i]==0)
            {

                   stack[++top]=i;
                   vstmx[i]=1;
            }
        }
    }
}
void bfs(int adjmx[n][n],int vtsmx[n],int start)
{
int queue[n],front=-1,rear=-1,i;
for(i=0;i<n;i++)
{

    vtsmx[i]=0;

}
  queue[++rear]=start;
  ++front;
  vtsmx[start]=1;
  while(rear>=front)
  {

      start=queue[front++];
      printf("%c",65+start);
      for(i=0;i<n;i++)
      {
       if(vtsmx[i]==0 && adjmx[start][i]==0)
      {
          queue[++rear]=i;
          vtsmx[i]=1;

      }

      }

  }
}
int main()
{

    printf("enter number of vtx");
    scanf("%d",&n);
    int adj[n][n];
    int vst[n],i,j;

    while(1){
        printf("enter choice");
        printf("\n1-dfs-\n2-bfs\n\n3-creation");
        scanf("%d",&ch);
        switch(ch)
        {

        case 1:
            printf("enter starting vtx");
            scanf("%d",&start);
            dfs(adj,vst,start);
            break;
        case 2:
             printf("enter starting vtx");
            scanf("%d",&start);
            bfs(adj,vst,start);
            break;
        case 3:
            printf("enter adj mx");
            for(i=0;i<n;i++)
            {

                for(j=0;j<n;j++)
                {

                    scanf("%d",&adj[i][j]);
                }
            }
            break;
        default:
            printf("worng command");
        }
    }
    return 0;
}
