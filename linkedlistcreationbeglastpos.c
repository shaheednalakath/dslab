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
 int choice;
 int i,n,item,newitem,newdatalastnode,posdata,pos;
 while(1)
 {
        printf("\n1.create a linked list \n");
        printf("2.insert at begining \n");
        printf("3.insert at end or last node \n");
        printf("4.insert at given position \n");
        printf("5.Quit \n");
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
                      printf("\nenter element you want to add at given position\n");
                      scanf("%d",&posdata);
                      printf("\nenter pos to add item");
                      scanf("%d",&pos);
                      addnodepos(posdata,pos);
                      display();
            break;
            case 5:
            exit(1);
            default:
            printf("Wrong choice \n");


     }
 }




    return 0;
}

