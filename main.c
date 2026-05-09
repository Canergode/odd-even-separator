#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *evenArr,*oddArr;
    int N,i;
    int evenCount=0,oddCount=0;

    printf("Enter an integer:\n");
    scanf("%d",&N);

    // Allocate memory for both arrays
    evenArr=(int *)malloc(N*sizeof(int));
    oddArr=(int *)malloc(N*sizeof(int));

    // Separate even and odd numbers
    for(i=0;i<N;i++)
    {
        if(i%2==0)
        {
            *(evenArr+evenCount)=i;
            evenCount++;
        }
        else
        {
            *(oddArr+oddCount)=i;
            oddCount++;
        }
    }
    // Print even numbers
    printf("Even numbers:\n");
    for(i=0;i<evenCount;i++)
    {
        printf("%d  ",*(evenArr+i));
    }
    // Print odd numbers
    printf("\nOdd numbers:\n");
    for(i=0;i<oddCount;i++)
    {
        printf("%d  ",*(oddArr+i));
    }

    free(evenArr);
    free(oddArr);

    return 0;
}
