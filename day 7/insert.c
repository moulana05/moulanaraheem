#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter the numbers:");
    for(int i = 0; i < 5; i++){
        scanf("%d",&arr[i]);
    }
    arr[2]=20;
    printf("Bubble sort values are:");
    for(int i = 0; i <= 5; i++){
        printf("\n %d" , arr[i]);
    }
    printf("\n");
    return 0;
    
    
}