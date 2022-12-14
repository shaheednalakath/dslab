/*#include<stdio.h>
#define max 5
int queue[max];
int front=-1;
int rear = -1;
int enqueue(int value)
{

    if(rear== max-1)
    {

        printf("queue is full");
    }
    else{
        front=0;
        rear=rear+1;
        queue[rear]=value;


    }
}
int display()
{

if(rear == -1||front ==-1)
{

    printf("delention is not possible");
}
else{
    for(int i=front;i<=rear;i++)
    {

        printf("%d",queue[i]);
    }
}
}
int dequeue()
{

    if(front == -1 || front> rear)
    {

        printf("deletion is not possible");
    }
    else{
        front=front+1;
    }
}*/
/*#include<stdio.h>
#define max 10
int front=-1;
int rear=-1;
int queue[max];
int enqueue(int data)
{
if(rear == max-1)
{
 printf("\nover flow\n");

}
else{
    front=0;
    rear=rear+1;
    queue[rear]=data;

}
}
int dequeue()
{
    if(front == -1)
    {

        printf("\ndequeu  is not possible\n");
    }
    else{
        front=front+1;
    }



}
int dispaly()
{
    if(front == -1)
    {

        printf("\n display is not possible\n");
    }
    else{
        for(int i=front;i<=rear;i++)
        {

            printf("%d=>",queue[i]);
        }
    }


}
int main()
{
    int ch,data,n=0;
while(n<=max)
{

    printf("\n1- enqueue\n");

     printf("\n2- dequeue\n");
      printf("\n3- display\n");
       printf("\n4- quit\n");
       printf("\nenter your choice\n");
       scanf("%d",&ch);
       switch(ch)
       {

       case 1:

           printf("\nenter data to insert\n");
           scanf("%d",&data);
        enqueue(data);
        break;
       case 2:
           dequeue();
           break;
       case 3:
             dispaly();
             break;
       case 4:
             return 0;
            break;
       default:
        printf("\nworng choice\n");
       }
       n++;
}
    return 0;
}
*/
#include<stdio.h>
#define max 10
int rear=-1;
int front=-1;
int queue[max];
int data,i;
void enqueue(){
    printf("\nenter data\n");
    scanf("%d",&data);
    if(rear == max-1)
    {

        printf("\ninseration not possible\n");


    }
    else{
        front=0;
        rear=rear+1;
        queue[rear]=data;

    }
}
void dequeue()
{
if(front == -1 || front>rear)
{

    printf("\n empty queue deletion is not possible\n");
}
else if(front == rear)
{

    front=rear=-1;
}
else{
    front=front+1;

}

}
void display()
{
if(front == -1 || front>rear)
{

    printf("\ndisplay is not possible\n");
}
else{
    for(i=front;i<=rear;i++)
    {

        printf("%d=>",queue[i]);
    }
}

}
int main()
{
    int ch,data,n=0;
while(1)
{

    printf("\n1- enqueue\n");

     printf("\n2- dequeue\n");
      printf("\n3- display\n");
       printf("\n4- quit\n");
       printf("\nenter your choice\n");
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



