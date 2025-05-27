#include <stdio.h>
int main() {
        int arr[]={25,10,15,20,25};
        int*ptr=arr;
        for(int i=4;i>=0;i--){
            printf("%d",*(ptr+i));
        printf("\n");
        }
        
    return 0;
}