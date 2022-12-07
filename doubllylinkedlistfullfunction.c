/*#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prv;
};
struct node *start=NULL;
struct node *newnode,*current,*last;
int createdl(int data)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=NULL;
newnode->prv=NULL;
if(start == NULL)
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
int insertatfront(int datanew)
{

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=datanew;
    newnode->prv=NULL;
    newnode->next=NULL;


        newnode->next=start;
        start->prv=newnode;
        start=newnode;


}
int insertlastfn(int data){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prv=NULL;
    last->next=newnode;
    newnode->prv=last;
    last=newnode;
}


int insertdataatposition(int pos,int data)
{

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prv=NULL;


    current=start;
    int c=1;

    if (pos==1)
    {

        newnode->next=start;
        start->prv=newnode;
        start=newnode;
    }
    else{


    while(current != NULL && c<pos-1)
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
int insertdataafteragivennode(int datanew,int userdata)
{
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=datanew;
   newnode->next=NULL;
   newnode->prv=NULL;
   current=start;
        while(current->data != userdata  && current != NULL)
   {
     current=current->next;
   }
   newnode->next=current->next;
   newnode->prv=current;
   current->next->prv=newnode->next;
   current->next=newnode;



}

int deltefirstnode()
{

current=start;
if(current == NULL)
{

    printf("deletetion is not possible");

}
else{
     start=current->next;
     current->next->prv=start;
     free(current);
}
}
int displayforward()
{

    for(current=start;current !=NULL;current=current->next)
    {


        printf("%d=>",current->data);
    }
    printf("NULL");
}
int displaybackword()
{

    for(current=last;current!=NULL;current=current->prv)
    {

        printf("%d=>",current->data);
    }
    printf("NULL");
}
int main()
{
int n,data,i,fnodedata,lastdataadd,insertlastnum,pos,insertdatapos,insertdataafteranode,nodepos;
printf("enter size of linked list\n");
scanf("%d",&n);
printf("enter element to list\n");
for(i=0;i<n;i++)
{
    scanf("%d",&data);
    createdl(data);

}
printf("forward direction\n");
displayforward();
printf("\nbackword direction\n");
displaybackword();
printf("\n insert at front node enter data\n");
scanf("%d",&fnodedata);
insertatfront(fnodedata);
printf("forward direction\n");
displayforward();
printf("backword direction");
displaybackword();
printf("\ninsert last node");
printf("\nenter data to insert");
scanf("%d",&insertlastnum);
insertlastfn(insertlastnum);
printf("forward direction\n");
displayforward();
printf("backword direction");
displaybackword();
printf("\n insert at a given position");
printf("\n enter position you want to insert");
scanf("%d",&pos);
printf("\n enter data to insert at given position");
scanf("%d", &insertdatapos);
insertdataatposition(pos,insertdatapos);
printf("forward direction\n");
displayforward();
printf("backword direction");
displaybackword();
printf("\n");
printf("forward direction\n");
displayforward();
printf("backword direction");
displaybackword();






    return 0;
}
*/


#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prv;
};
struct node *start=NULL;
struct node *newnode,*current,*last;
int n,i,data,pos,c=1;

void creation()
{

    printf("\nenter size of linkedlist\n ");
    scanf("%d",&n);
    printf("\nenter element to ll\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&data);
    }
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prv=NULL;
    if(start == NULL)
    {
        start=newnode;
        current=newnode;
        last=newnode;
    }
    else{
        last->next=newnode;
        newnode->prv=last;
        last=newnode;
    }


}
void insertfront()
{

    printf("\nenter data you want to insert front\n");
    scanf("%d",&data);
    newnode=(struct node*)malloc(sizeof (struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prv=NULL;
    newnode->next=start;

        newnode->next=start;
        start->prv=newnode;
        start=newnode;




}
void insertlast()
{
    if(start == NULL)
    {

        printf("\n first you want  to create a linked list using creation function\n");
    }
    else{
            printf("\nenter data you want to insert\n");
                scanf("%d",&data);

        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
        newnode->prv=NULL;
        last->next=newnode;
        newnode->prv=last;
        last=newnode;

    }



}
void insertposition()
{

  printf("\nenter the position you want to insert data at position\n");
  scanf("%d",&pos);
  printf("\n enter data you want to insert at particular position\n");
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
        while(current != NULL && c<pos-1)
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
void deletefront()
{

if(start == NULL)
{
        printf("\n deletion is not possible \n");
}
else{
         current=start;
        start=current->next;
        current->next=start;
        start->prv=NULL;
        free(current);



}





}
void deletelast()
{
if(start != NULL)
{
     current=last;
    last=last->prv;
    last->next=NULL;

    free(current);
}

else{

    printf("\n printf deletion is not possible\n");
}


}
void displayforward()
{
    if(start == NULL)
    {

        printf("display is not possible");
    }
    else{
        for(current=start;current != NULL;current=current->next)
        {

            printf("%d=>",current->data);
        }
        printf("NULL");
    }

}
void displaybackword()
{
if(start == NULL)
{

    printf("\n display not possible\n");
}
else{
    for(current = last;current !=NULL;current=current->prv)
    {

        printf("%d=>",current->data);
    }
    printf("NULL");
}

}
int main()
{

    int ch;
    printf("\n\n****************************************************\n\n\n");
    while(1)
    {

        printf("\n1-creations\n");
        printf("\n2-insert at front node\n");
        printf("\n3-insert at last\n");
        printf("\n4-insert at position\n");
        printf("\n5-deletion from front\n");
        printf("\n6-deletion from last\n");
        printf("\n7-exit\n");
        printf("\n8-display forward\n");
        printf("\n9-display backword\n");
        printf("\nenter your ch\n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            creation();
            break;
        case 2:
            insertfront();
            break;
        case 3:
            insertlast();
            break;
        case 4:
            insertposition();
            break;
        case 5:
            deletefront();
            break;
        case 6:
            deletelast();
            break;
        case 7:
            return 0;
            break;
        case 8:
            printf("\n\n****************************************************\n\n\n");

            displayforward();
             printf("\n\n****************************************************\n\n\n");
            break;
        case 9:
             printf("\n\n****************************************************\n\n\n");
            displaybackword();
             printf("\n\n****************************************************\n\n\n");
            break;
        default:
            printf("\n invalied choice\n");

        }
    }
    return 0;
}
