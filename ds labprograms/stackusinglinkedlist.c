#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *next;
};
struct node *newnode,*current,*top=NULL;
int ch,data;
void push()
{
    printf("enter data");
    scanf("%d",&data);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;

    if(top == NULL)
    {


        top=newnode;
    }
    else{
        newnode->next=top;
        top=newnode;
    }


}
void pop()
{
if(top ==  NULL )
{

    printf("deletion not possible");
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

    printf("deletion not possible");

}
else{
    for(current=top;current!=NULL;current=current->next)
    {

        printf("%d=>",current->data);
    }
}

}

int main()
{
    while(1)
    {

        printf("enter coice");
        printf("\n1-push\n,\n2-pop\n,\n3-display\n,\n4-exit\n");
        scanf("%d",&ch);
        switch(ch)
        {

        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
            break;
        default:
            printf("wrong command");
        }
    }
    return 0;
}
