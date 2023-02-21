#include<stdio.h>
#define max 10
int size,i;
int u[max],a[max],b[max],unionset[max],intersetionset[max],difference_a[max],difference_b[max],complement_a[max],complement_b[max];
void create_u_set()
{
printf("enter size of set");
scanf("%d",&size);
printf("enter universial set");
for(i=0;i<size;i++)
{

    scanf("%d",&u[i]);
}
printf("\nu_set\n");
for(i=0;i<size;i++)
{
printf("%d",u[i]);
}
printf("\n");
}
void create_a_set()
{

printf("enter a set");
for(i=0;i<size;i++)
{

    scanf("%d",&a[i]);
}
printf("\na_set\n");
for(i=0;i<size;i++)
{
   if(a[i]==1)
   {

       printf("%d",u[i]);
   }
}
printf("\n");
}



void create_b_set()
{

printf("enter b set");
for(i=0;i<size;i++)
{

    scanf("%d",&b[i]);
}
printf("**************");
printf("\nu_set\n");
for(i=0;i<size;i++)
{
  if(b[i]==1)
  {

      printf("%d",u[i]);
  }
}
printf("***********");
}






void  create_union_setab()
{

    for(i=0;i<size;i++)
    {

        unionset[i]=a[i] | b[i];
    }
    printf("\nAUB\n");
    for(i=0;i<size;i++)
    {

        if(unionset[i]==1)
        {

            printf("%d",u[i]);
        }
    }
}

void create_intersion_setab(){
    for(i=0;i<size;i++)
    {

        intersetionset[i]=a[i]&b[i];
    }
    printf("\nANB\n");
    for(i=0;i<size;i++)
    {
        if(intersetionset[i]==1)
        {

            printf("%d",u[i]);
        }

    }
}
void create_complement_seta()
{

    for(i=0;i<size;i++)
    {
        complement_a[i]=1-a[i];

    }
    printf("complement of a");
    for(i=0;i<size;i++)
    {
        if(complement_a[i]==1)
        {
          printf("%d",u[i]);
        }

    }
}
void create_complement_setb()
{

    for(i=0;i<size;i++)
    {
        complement_b[i]=1-b[i];

    }
    printf("complement of a");
    for(i=0;i<size;i++)
    {
        if(complement_b[i]==1)
        {
          printf("%d",u[i]);
        }

    }
}
void create_differance_seta()
{

    for(i=0;i<size;i++)
    {
     difference_a[i]=a[i]&complement_b[i];
    }
    printf("\na-b\n");
    for(i=0;i<size;i++)
    {

        if(difference_a[i]==1)
        {

            printf("%d",u[i]);
        }
    }
}
void create_differance_setb()
{

    for(i=0;i<size;i++)
    {
     difference_b[i]=b[i]&complement_a[i];
    }
    printf("\nb-a\n");
    for(i=0;i<size;i++)
    {

        if(difference_b[i]==1)
        {

            printf("%d",u[i]);
        }
    }
}
int main()
{
    int ch;
    while(1)
    {

        printf("enter ch");
        printf("\n1-universialset\n,");
        printf("\n2-seta\n");
        printf("\n3-setb\n");
        printf("\n4-union of and b\n");
        printf("\n5-intersetion and b\n");
        printf("\n6-complement a\n");
         printf("\n7-complement_b\n");
          printf("\n8-differance a a\n");
           printf("\n9-differance b\n");
           scanf("%d",&ch);
           switch(ch)
           {
           case 1:
               create_u_set();
            break;
            case 2:
               create_a_set();
            break;
            case 3:
               create_b_set();
            break;
            case 4:
                create_union_setab();
                break;
                 case 5:
                    create_intersion_setab();
                break;
                 case 6:
                    create_complement_seta();
                    break;
                 case 7:
                    create_complement_setb();
                    break;
                 case 8:
                    create_differance_seta();
                    break;
                 case 9:
                    create_differance_setb();
                    break;
           }
    }
    return 0;
}

