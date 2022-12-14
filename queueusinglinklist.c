#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *front=NULL,*rear = NULL;
struct node *newnode,*current;
int data,n,i;
void enqueue()
{
printf("\nenter element to queue\n");
scanf("%d",&data);
newnode=(struct node*)malloc(sizeof (struct node));
newnode->data=data;
newnode->next=NULL;
if(front == NULL && rear == NULL)
{

    rear=newnode;
    front=newnode;
}
else{
    rear->next=newnode;
    rear=newnode;
}


}

void dequeue()
{
if(front == NULL)
{

    printf("\nqueue empty\n");

}
else{
        current=front;
        front=front->next;
        if(front== NULL)
        {
            rear=NULL;
            free(current);
        }
}

}
void display()
{
if(front == NULL || rear == NULL )
{
    printf("\n no data display not possible\n");
}
else{
    for(current=front;current!=NULL;current=current->next)
    {

        printf("%d=>",current->data);



    }
    printf("NULL");
}

}
int main()
{
    int ch;
    while(1)
    {

        printf("\n 1-enqueue\n");
        printf("\n 2-dequeue\n");
        printf("\n 3-display\n");
        printf("\n 4-quit\n");
        printf("\n enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {

        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
            break;
        default:
            printf("\nworng choice\n");
        }
    }
    return 0;
}
