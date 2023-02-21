#include<stdio.h>
#define max 3
int ch;
int stack[max];
int top =-1;
int data;
int n;
void push()
{

 if(n<max)
 {
     n++;
     printf("enter data");
     scanf("%d",&data);



       if(top == max-1)
           {

             printf("stack full");
            }
               else{
                     top=top+1;
                     stack[top]=data;
                   }
 }
else{
    printf("reach maxium size");
}
}
void pop()
{
  if(top == -1)
  {

      printf("stack empty");
  }
  else{
    top=top-1;
  }

}
void display()
{
if(top== -1)
{

    printf("display not possible");

}
else{

    for(int i=top;i>=0;i--)
    {

        printf("%d=>",stack[i]);
    }
}

}
int main()
{
while(1)
{
 printf("\n1-push\n,\n2-pop\n,\n3-display\n,\n4-exit\n");
 printf("enter your choice");
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
        printf("worng command");
 }

}


    return 0;
}
