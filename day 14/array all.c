#include <stdio.h>
int main() {
        int arr[]={25,10,15,20,30};
        int*ptr=arr;
        int *start=arr;
        int*end=arr+4;
        int temp;
        while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
        }
        for(int i=0;i<=4;i++){
        printf("original array:%d\n",*(ptr+i));
        printf("\n");
        }
        for(int i=4;i>=0;i--){
        printf("reversed array:%d\n",*(ptr+i));
        printf("\n");
        }
    return 0;
}