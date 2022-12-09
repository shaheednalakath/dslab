#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *newnode,*current,*top=NULL;
int data;
void push()
{


printf("\nenter data to  insert on stack\n");
scanf("%d",&data);
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;

if(top == NULL)
{


newnode->next=NULL;
top=newnode;

}
else{
    newnode->next=top;
    top=newnode;
}

}
void pop()
{
   if(top == NULL)
   {

       printf("\n deletion not possible");
   }
   else{
    current=top;
    top=top->next;
    free(current);
   }


}


void display()
{
if(top == NULL)
{

    printf("stack empty");
}
else{
    for(current=top;current != NULL;current=current->next)
    {
         printf("%d=>",current->data);

    }
}
}
int main()
{
    int ch;
    while(1)
    {

        printf("\n1-push\n");
        printf("\n2-pop\n");
        printf("\n3-display\n");
        printf("\n enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {

         case 1:
             printf("\n*******************************\n");
             push();
             printf("\n*******************************\n");
             break;
         case 2:
             printf("\n*******************************\n");
            pop();
            printf("\n*******************************\n");
            break;
         case 3:
             printf("\n*******************************\n");
            display();
            printf("\n*******************************\n");
            break;
         default:
             printf("\n*******************************\n");
            printf("worng choice");
            printf("\n*******************************\n");

        }
    }
    return 0;
}
