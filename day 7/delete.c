#include <stdio.h>
int main() 
{
    int arr[5], num, size = 5; 
    printf("ENTER 5 NUMBERS:\n"); 
    for (int i = 0; i < size; i++) 
    {
     scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size - 1; i++)
    { 
        for (int j = 0; j < size - i - 1; j++) 
        { 
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("ENTER A NUMBER TO (TRY TO) DELETE:\n");
    scanf("%d", &num);
    printf("THE BUBBLE SORTED VALUES ARE:\n");
    for (int i = 0; i < size; i++)
    { 
        printf(" %d", arr[i]);
    }
    printf("\n");

    return 0;
}