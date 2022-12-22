#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
int top=-1;

int push(int value)
{
 if(top == max-1){
   
printf("push  is not possible");
 }else
{
 top=top+1;
stack[top]=value;

}
}





int pop()
{

if(top == -1)
{
printf("deletion is not posible");
}
else{

  
  top=top-1;
}



}
int display()
{
int i;
     if(top == -1)
      {
        printf("display is not possible");
      }
       else{
          for(i=top;i>=0;i--)
              { 
                 printf("%d>>>>",stack[i]);
               }

           }       
}
int main()
{
int i,n,data,ch;
printf("enter size of stack");
scanf("%d",&n);
printf("enter data");
for(i=0;i<n;i++)
{

scanf("%d",&data);
push(data);

}
display();
printf("how many elements you want to delete");
scanf("%d",&ch);
for(i=0;i<ch;i++)
{


pop(i);

}
display();
return 0;
}
