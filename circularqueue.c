#include<stdio.h>
#define max 10
int front = -1;
int rear = -1;
int c_queue[max];
void enqueue()
{
    int data;
printf("enter data");
scanf("%d",&data);
    if((front == -1 ) && (rear==-1))
    {

        front=0;
        rear=0;
        c_queue[rear]=data;
    }
    else if(front==(rear+1)% max)
    {
        printf("\nqueue full\n");
    }
    else{
        rear=(rear+1)%max;
        c_queue[rear]=data;
    }


}
void dequeue()
{
if((front == -1 )&& (rear==-1))
{

    printf("\ndeletion  is not possinble\n");
}
else if(front == rear)
{

    printf("\nqueue contain onely one elements and delete the last element\n");
    front=-1;
    rear=-1;
}
else{
    front=(front+1)%max;

}

}

void display()
{
    if(front == -1 && rear == -1)
    {

        printf("\ndisplay is not possible\n");
    }
    else{
        for(int i=front;i<=rear;i++)
        {


            printf("%d=>",c_queue[i]);
        }
        printf("END");
    }


}
int main(){
    int ch;
    while(1)
    {

        printf("\n1-enqueue\n");
        printf("\n2-dequeue\n");
        printf("\n3-display\n");
        printf("enter your choice");
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
            printf("worng choice");
        }
    }
    return 0;
}
