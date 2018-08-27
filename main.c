#include <stdio.h>
#include <stdlib.h>
#define SIZE1 18
#define SIZE2 5

int main()
{
    int myArray1[SIZE1],myArray2[SIZE2],i,j,k;
    printf("Please input elements in ascending order for Array A: \n");
    for (i=0; i<SIZE1-SIZE2; i++)
    {
        scanf("%d",&myArray1[i]);
    }
    printf("Please input elements in ascending order for Array B: \n");
    for (i=0; i<SIZE2; i++)
    {
        scanf("%d",&myArray2[i]);
    }
    for(j=0; j<SIZE2; j++)
    {
        for (i=0; i<SIZE2; i++)
        {
            if(myArray2[j]<=myArray1[i])
            {
                for (k=SIZE1-1; k<i; k--)
                {
                    myArray1[k]=myArray1[k-1];
                    myArray1[i]=myArray2[j];
                }
                myArray1[i]=myArray2[j];


            }
        }
    }
printf("Sorted Array: \n");
    for(i=0; i<SIZE1; i++)
    {
        printf("%d\n",myArray1[i]);
    }

}
