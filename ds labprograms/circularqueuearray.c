  #include<stdio.h>
#define max 3
int front=-1;
int rear=-1;
int c_queue[max];
int ch,data,n=0;
void enqueue()

{
if(n<max)
 {
    n++;
    printf("enter data");
    scanf("%d",&data);

       if(front ==-1 && rear ==-1)
          {
           front=0;
           rear=0;
           c_queue[rear]=data;

          }
        else if(front==(rear+1)%max)
         {

            printf("c_queue full");
         }
          else{
             rear=(rear+1)%max;
             c_queue[rear]=data;
            }
   }
else{
        printf("reach maximum size");
}
}
void dequeue()
{
if(front == -1 && rear == -1)
{

    printf("queue empty");

}
else if(front == rear )
{

    front=-1;
    rear = -1;
}
else {
    front=(front+1)%max;
}

}
void display()
{
if(front==-1 && rear ==-1)
{

    printf("display not possible");
}
else{
    for(int i=front;i<=rear;i++)
    {

        printf("%d=>",c_queue[i]);
    }
    printf("END");
}


}
int main()
{
    while(1)
    {
        printf("\n1-enqueue \n 2-dequeue,\n3-display\n4-exit\n");
        printf("enter your coice");

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
            printf("worng command");
        }
    }

    return 0;
}
