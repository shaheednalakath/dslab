
/*
#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *next;
};
struct node *newnode,*current,*start=NULL;
int createll(int data)
{
   newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
        if(start==NULL)
        {
            start=newnode;
            current=newnode;
        }
        else
            {
                current->next=newnode;
                 current=newnode;
            }

}
int addbeg(int datanew)
{

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=datanew;
    newnode->next=NULL;
    newnode->next=start;
    start=newnode;
}
int addlast(int newdatalast)
{
    newnode=(struct node*) malloc(sizeof(struct node));
    newnode->data=newdatalast;
    newnode->next=NULL;
    current=start;
    while(current->next != NULL)
    {
        current=current->next;
    }
    current->next=newnode;
}
int addnodepos(int posdata,int pos)
{
    int c;

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=posdata;
    newnode->next=NULL;
    if(pos == -1)
    {

        newnode->next=start;
        start=newnode;
    }
    else{
            c=1;
        current=start;
    while(current != NULL && c< pos-1)
    {
        c++;
        current=current->next;
    }
    if(current != NULL)
    {

        newnode->next=current->next;
        current->next= newnode;
    }
    else{
        printf("no such a position in ll");
    }


    }

}
int display(){
for(current=start;current != NULL;current=current->next)
{

    printf("%d->",current->data);
}
printf("NULL");
}
int main()
{

 int i,n,item,newitem,newdatalastnode,posdata,pos;

                      printf("\nenter element size");
                      scanf("%d",&n);
                      printf("\nenter element");
                      for(i=0;i<n;i++)
                        {
                          scanf("%d",&item);
                          createll(item);
                         }
                           display();

                    printf("\nadd new data to ll enter some data");
                    scanf("%d",&newitem);
                    addbeg(newitem);
                    display();


                     printf("element add at last position enter data");
                     scanf("%d",&newdatalastnode);
                     addlast(newdatalastnode);
                     display();

                      printf("\nenter element you want to add at given position\n");
                      scanf("%d",&posdata);
                      printf("\nenter pos to add item");
                      scanf("%d",&pos);
                      addnodepos(posdata,pos);
                      display();






    return 0;
}

*/

/*
#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *next;
};
struct node *newnode,*current,*previous,*start=NULL;
int createll(int data)
{
   newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
        if(start==NULL)
        {
            start=newnode;
            current=newnode;
        }
        else
            {
                current->next=newnode;
                 current=newnode;
            }

}
int addbeg(int datanew)
{

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=datanew;
    newnode->next=NULL;
    newnode->next=start;
    start=newnode;
}
int addlast(int newdatalast)
{
    newnode=(struct node*) malloc(sizeof(struct node));
    newnode->data=newdatalast;
    newnode->next=NULL;
    current=start;
    while(current->next != NULL)
    {
        current=current->next;
    }
    current->next=newnode;
}
int addnodepos(int posdata,int pos)
{
    int c;

    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=posdata;
    newnode->next=NULL;
    if(pos == -1)
    {

        newnode->next=start;
        start=newnode;
    }
    else{
            c=1;
        current=start;
    while(current != NULL && c< pos-1)
    {
        c++;
        current=current->next;
    }
    if(current != NULL)
    {

        newnode->next=current->next;
        current->next= newnode;
    }
    else{
        printf("no such a position in ll");
    }


    }

}
int addafteranode(int afdata,int afnode)
{
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=afdata;
 newnode->next=NULL;
 current=start;
 while(current->data != afnode)
 {
     current=current->next;
 }
 newnode->next=current->next;
 current->next=newnode;

}
int display(){
for(current=start;current != NULL;current=current->next)
{

    printf("%d->",current->data);
}
printf("NULL");
}
int delfront(){
     current=start;
     start=current->next;
     free(current);



}
int dellast()
{
   current=start;
   while(current->next != NULL)
   {
       previous=current;
       current=current->next;
   }
   previous->next=NULL;
   free(current);



}
int delnodedelatlast(int posdelte)
{
    current=start;
    int c=1;

    if(posdelte == 1)
    {
       start=current->next;
       free(current);

    }
    else{
        while(current != NULL && c<posdelte-1)
        {
          previous=current;
          current=current->next;

        }
        previous=current->next->next;
        free(current->next);
        current->next=previous;
    }
}
int main()
{
 int choice;
 int i,n,item,newitem,newdatalastnode,posdata,pos,afterdata,afternode,delnodepos;
 while(1)
 {
        printf("\n1.create a linked list \n");
        printf("2.insert at begining \n");
        printf("3.insert at end or last node \n");
        printf("4.insert after a node \n");
        printf("5.insert at given position \n");
        printf("6.delete front node \n");
        printf("7.delete last node \n");
        printf("8.delete user enter postion node\n");
        printf("9.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

     switch(choice)
     {
           case 1:
                      printf("\nenter element size");
                      scanf("%d",&n);
                      printf("\nenter element");
                      for(i=0;i<n;i++)
                        {
                          scanf("%d",&item);
                          createll(item);
                         }
                           display();
            break;
            case 2:
                    printf("\nadd new data to ll enter some data");
                    scanf("%d",&newitem);
                    addbeg(newitem);
                    display();

            break;
            case 3:
                     printf("element add at last position enter data");
                     scanf("%d",&newdatalastnode);
                     addlast(newdatalastnode);
                     display();
            break;
            case 4:
                    printf("enter data you want to add after a given node");
                    scanf("%d",&afterdata);
                    display();
                    printf("enter data you wand to add after a given node in linked list");
                    scanf("%d",&afternode);
                    addafteranode(afterdata,afternode);
                    display();
                    break;
            case 5:
                      printf("\nenter element you want to add at given position\n");
                      scanf("%d",&posdata);
                      printf("\nenter pos to add item");
                      scanf("%d",&pos);
                      addnodepos(posdata,pos);
                      display();
            break;
            case 6:
                      printf("\ndelete front node in ll\n");
                      delfront();
                      display();
                      break;
            case 7:
                      printf("\ndelete last node in linked list\n");
                      dellast();
                      display();
                      break;
            case 8:
                      printf("\n delete at given position");
                      printf("\nenter position you want to delete a node in ll\n ");
                      scanf("%d",&delnodepos);
                      delnodedelatlast(delnodepos);
                      display();
                      break;
            case 9:
            exit(1);
            default:
            printf("Wrong choice \n");


     }
 }




    return 0;
}

*/
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *newnode,*current,*start=NULL,*previous;
int data,c;
int create(int data)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(start== NULL)
    {

        start=newnode;
        current=newnode;
    }
    else{
        current->next=newnode;
        current=newnode;
    }

}
int insertfront(int data)
{
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=data;
   newnode->next=NULL;
   if(start == NULL)
   {

       start=newnode;
       current=newnode;
   }
   else{
    newnode->next=start;
    start=newnode;
   }

}
int insertlast(int data)
{
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=data;
 newnode->next=NULL;
 current=start;
 while(current->next != NULL)
 {

     current=current->next;
 }
 current->next=newnode;
 current=newnode;

}
int  insertposition(int pos,int data)
{
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=data;
   newnode->next=NULL;
   if(pos==1)
   {

       newnode->next=start;
       start=newnode;
   }
   else{
    c=1;
    current=start;
    while(current != NULL && c<pos-1)
    {
         c++;
        current=current->next;
    }
    newnode->next=current->next;
    current->next=newnode;
   }

}
int deletefirst()
{
  current=start;
  start=current->next;
  free(current);

}
int deletelast()
{


     current=start;
      while(current->next != NULL)
 {

     previous=current;
     current=current->next;
 }
 previous->next=NULL;
 free(current);

 }




int deletepos(int pos)
{
    current=start;
    if(pos == 1)
    {
      start=current->next;
      free(current);

    }
    else{


 int c=1;
 current=start;
 while(current->next != NULL && c<pos-1)
 {
     c++;
     previous=current;
     current=current->next;
 }
 previous=current->next->next;
 free(current->next);
 current->next=previous;
    }
}
int display()
{
   if(start != NULL)
   {

       for(current=start;current!= NULL;current=current->next)
    {

        printf("%d=>",current->data);
    }
    printf("NULL");
   }
   else{
    printf("no data in list");
   }

}


int main()
{
int ch,data,n,i,pos;
while(1)
{

    printf("\nenter choice\n");
    printf("\n 1-create\n2-insert front,\n 3=insert last,\n4=insertposition,\n5-display\n,\n-6-delfront\n,-7-dellast\n,\n8-delpos\n9-exit");
    scanf("%d",&ch);
    switch(ch)
    {

    case 1:
        printf("enter size of list");
        scanf("%d",&n);
        printf("enter element to list");
        for(i=0;i<n;i++)
        {

            scanf("%d",&data);
            create(data);
        }

        break;
    case 2:
        printf("enter data to insert front");
        scanf("%d",&data);
        insertfront(data);
        break;
    case 3:
        printf("enter data to insert last position");
        scanf("%d",&data);
        insertlast(data);
        break;
    case 4:
        printf("enter position you want to insert");
        scanf("%d",&pos);
        printf("enter data to insert at position");
        scanf("%d",&data);
        insertposition(pos,data);
        break;
    case 5:
        display();
        break;
    case 6:
        deletefirst();
        break;
    case 7:
        deletelast();
        break;
    case 8:
        printf("enter position");
        scanf("%d",&pos);
        deletepos(pos);
        break;
    case 9:
        exit(1);
        break;
    default:
        printf("wrong command");
    }
}
    return 0;
}
