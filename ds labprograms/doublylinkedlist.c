#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
struct node*prv;
};
struct node *start=NULL;
struct node *newnode,*last,*current,*deletenode;
int ch,i,n,data,pos,c=1;
void create(){
    printf("enter size of list");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&data);
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
        newnode->prv=NULL;
        if(start==NULL)
        {

            start=newnode;
            last=newnode;
        }
        else{
            last->next=newnode;
            newnode->prv=last;
            last=newnode;
        }
    }
}
void insertfront(){
    printf("enter data you want to insert");
    scanf("%d",&data);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prv=NULL;
    newnode->next=start;
    start->prv=newnode;
    start=newnode;
}
void insertlast(){
    printf("enter data to insert at last");
    scanf("%d",&data);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prv=NULL;
    last->next=newnode;
    newnode->prv=last;
    last=newnode;
}
void  insertpos(){
    printf("enter position you want to insert data");
    scanf("%d",&pos);
    printf("enter data you want to insert");
    scanf("%d",&data);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prv=NULL;
    if(pos == 1)
    {

        newnode->next=start;
        start->prv=newnode;
        start=newnode;
    }
    else{
        current=start;
        while(current!= NULL && c < pos-1)
        {

            c++;
            current=current->next;
        }
        newnode->prv=current;
        newnode->next=current->next;
        current->next->prv=newnode;
        current->next=newnode;
    }

}
void displayforward(){
    for(current=start;current!=NULL;current=current->next)
    {

        printf("%d=>",current->data);
    }
    printf("NULL");
}
void displaybackword(){
 for(current=last;current != NULL;current=current->prv)
 {

     printf("%d=>",current->data);
 }
 printf("NULL");
}
void   deletefirst()
{
    if(start != last)
    {
    current=start;
    start=current->next;
    start->prv=NULL;
    free(current);

    }
    else{
        printf("deletion not possible");
    }

}
void deletelast()
{
    if(start  != last)
    {
    current=last;
    last=last->prv;
    last->next=NULL;
    free(current);

    }
    else{
        printf("deletion notpossible");
    }

}
void deletepostion()
{
    printf("enter position");
    scanf("%d",&pos);
    if(pos==1)
    {

        current=start;
        start=current->next;
        start->prv=NULL;
        free(current);

    }
    else{
        current=start;
        while(current != NULL && c<pos-1)
        {
            c++;
            current=current->next;
        }
        deletenode=current->next;
        current->next=deletenode->next;
        deletenode->next->prv=current;
        free(deletenode);
    }
}




int main()
{
  while(1)
  {

      printf("\n1-create\n,\n2 insertfront\n,\n3-insertlast\n,\n4-insertpos\n,\n5displayforwaerd\n,\n6-displaybackword\n,\n7-delfirst\n,\n8-dellast\n");
      scanf("%d",&ch);
      switch(ch)
      {

      case 1:
        create();
        break;
      case 2:
        insertfront();
        break;
      case 3:
        insertlast();
        break;
      case 4:
        insertpos();
        break;
      case 5:
        displayforward();
        break;
      case 6:
        displaybackword();
        break;
      case 7:
        deletefirst();
        break;
      case 8:
        deletelast();
        break;
      case 9:
        deletepostion();
        break;
      }
  }
    return 0;
}
