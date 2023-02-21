
#include <stdio.h>
#define MAXSIZE 20

void readSets(int);
int U[MAXSIZE], A[MAXSIZE], B[MAXSIZE], uni[MAXSIZE], ints[MAXSIZE], diffA[MAXSIZE], diffB[MAXSIZE],
    i, compA[MAXSIZE], compB[MAXSIZE];

void readSet(int SIZE)
{
    printf("Enter the Universal set elements ");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d:", &U[i]);
    }
    printf("Enter A ");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d:", &A[i]);
    }
    printf("Enter B ");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d:", &B[i]);
    }
}

int main()
{
    int SIZE;
    printf("Enter the required set length: ");
    scanf("%d", &SIZE);
    readSet(SIZE);
    printf("The universal set=");
    printf("{");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", U[i]);
    }
    printf("}");




    printf("\nSet A=");
    printf("{");
    for (i = 0; i < SIZE; i++)
    {
        if (A[i] == 1)
            printf("%d ", U[i]);
    }
    printf("}");



    printf("\nSet B");
    printf("{");
    for (i = 0; i < SIZE; i++)
    {
        if (B[i] == 1)
            printf("%d ", U[i]);
    }
    printf("}");
    printf("\nUnion of A and B in Bit representation is: ");
    for (i = 0; i < SIZE; i++)
    {
        uni[i] = A[i] | B[i];
        printf("%d ", uni[i]);
    }
    printf("\nAUB={");
    for (i = 0; i < SIZE; i++)
    {
        if (uni[i] == 1)
            printf("%d ", U[i]);
    }
    printf("}");
    printf("\nIntersection of A and B in Bit representation is: ");
    for (i = 0; i < SIZE; i++)
    {
        ints[i] = A[i] & B[i];
        printf("%d ", ints[i]);
    }
    printf("\nAnB={");
    for (i = 0; i < SIZE; i++)
    {
        if (ints[i] == 1)
            printf("%d ", U[i]);
    }
    printf("}");
    printf("\nComplement of A in Bit representation is:");
    for (i = 0; i < SIZE; i++)
    {
        compA[i] = 1 - A[i];
        printf("%d ", compA[i]);
    }
    printf("\nA'={");
    for (i = 0; i < SIZE; i++)
    {
        if (compA[i] == 1)
            printf("%d ", U[i]);
    }
    printf("}");
    printf("\nComplement of B in Bit representation is: ");
    for (i = 0; i < SIZE; i++)
    {
        compB[i] = 1 - B[i];
        printf("%d ", compB[i]);
    }
    printf("\nB'={");
    for (i = 0; i < SIZE; i++)
    {
        if (compB[i] == 1)
            printf("%d ", U[i]);
    }
    printf("}");
    printf("\nDifference of A in Bit representation is:");
    for (i = 0; i < SIZE; i++)
    {
        diffA[i] = A[i] & compB[i];
        printf("%d ", diffA[i]);
    }
    printf("\nA-B={");
    for (i = 0; i < SIZE; i++)
    {
        if (diffA[i] == 1)
            printf("%d ", U[i]);
    }
    printf("}");
    printf("\nDifference of B in Bit representation is:");
    for (i = 0; i < SIZE; i++)
    {
        diffB[i] = B[i] & compA[i];
        printf("%d ", diffB[i]);
    }
    printf("\nB-A={");
    for (i = 0; i < SIZE; i++)
    {
        if (diffB[i] == 1)
            printf("%d ", U[i]);
    }
    printf("}");
    return 0;
}
