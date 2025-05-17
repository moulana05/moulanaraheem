c#include <stdio.h>

int main() {
    int num, original ,reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num)
    reversed = reversed * 10 + num % 10 , num /= 10;;
    printf("Reversed number: %d\n", reversed);
    
    if(original == reversed){
    printf( "%d is a palindrome . \n" ,  original);
    }
    else{
    printf(" %dd is a not palindrome . \n" , original);
    }
    return 0;
}
