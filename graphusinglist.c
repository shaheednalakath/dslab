/*#include<stdio.h>
#include<stdlib.h>
int num_vtx,k,data;
struct node{
int data;
struct node *next;
};
void readgraph(struct node *adj[])
{
  struct node *newnode;
  int i,j,k,val;
 for(i=0;i<num_vtx;i++)
 {
      struct node *last=NULL;
     printf("how many vtx are adj to %d",i);
     scanf("%d",&k);
     for(j=0;j<k;j++)
     {
         printf("enter the value of%d nib of%d",j,i);
         scanf("%d",&val);
         newnode=(struct node*)malloc(sizeof(struct node));
         newnode->data=val;
         newnode->next=NULL;
         if(adj[i]==NULL)
         {

             adj[i]=newnode;
             last=newnode;
         }
         else{
            last->next=newnode;
            last=newnode;

         }

     }
 }
}
void printgraph(struct node *adj[])
{
struct node *ptr=NULL;
int i,j;
for(i=0;i<num_vtx;i++)
{

    ptr=adj[i];
    printf("\nnibors pint %d\n",i);
    while(ptr !=NULL)
    {

        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}

}
int main()
{
    printf("enter number of vtx");
    scanf("%d",&num_vtx);
    struct node *adj[num_vtx];
    for(int i=0;i<num_vtx;i++)
    {

        adj[i]=NULL;
    }
    readgraph(adj);
    printgraph(adj);

    return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>
int num_vtx;
struct node{
int data;
struct node *next;

};
struct node *last=NULL,*newnode,*ptr=NULL;
int i,n,j,val;
void creategraph(struct node *adj[]);
void printgraph(struct node *adj[]);
void bfs(struct node *adj[],int start,int vist[]);
int main()
{

    int i,start,vst[num_vtx];
    printf("enter number of vtx");
    scanf("%d",&num_vtx);
    struct node *adj[num_vtx];
    for(i=0;i<num_vtx;i++)
    {

        adj[i]=NULL;
    }
    creategraph(adj);
    printgraph(adj);
    printf("enter vtx from which you want to start");
    scanf("%d",&start);
    for(i=0;i<num_vtx;i++)
    {

        vst[i]=0;
    }
    bfs(adj,start,vst);

    return 0;
}


void creategraph(struct node *adj[])
{
    for(i=0;i<num_vtx;i++)
    {
        printf("enter numbers of adj vtx are adj to =>%d<=",i);
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
           printf("enter nibors of =>%d<= ",i);
           scanf("%d",&val);
           newnode=(struct node*)malloc(sizeof(struct node));
           newnode->data=val;
           newnode->next=NULL;
           if(adj[i] == NULL)
           {

               adj[i]=newnode;
               last=newnode;

           }
           else{
            last->next=newnode;
            last=newnode;
           }

        }


    }


}
void printgraph(struct node *adj[])
{

  for(i=0;i<num_vtx;i++)
  {
      ptr=adj[i];
      printf("\nnob of %d\n",i);
      while(ptr != NULL)
      {

          printf("%d=>",ptr->data);
          ptr=ptr->next;
      }
      printf("NULL");


  }

}

void bfs(struct node *adj[],int start,int vst[])
{
    int queue[num_vtx],front=-1,rear=-1;
    printf("\n BFS.. ... \n");
    queue[++rear]=start;
    vst[start]=1;
    front++;
    while(front<=rear)
    {
        printf("%d",queue[front]);
        struct node *ptr;
        ptr=adj[queue[front++]];
        while(ptr != NULL)
        {

            if(vst[ptr->data] != 1)
            {

                queue[++rear]=ptr->data;
                vst[ptr->data]=1;
            }
            ptr=ptr->next;
        }
    }


}
