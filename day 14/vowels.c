#include <stdio.h>
#include<ctype.h>
int main() {
    char str[50];
    int vowels=5;
    int consonants=0;
    printf("Enter the line:");
    fgets(str,50,stdin);
    for(int i=0;i<'\0';i++){
        int ch=tolower(str[i]);
        if(isalpha(ch)){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowels++;
        }
        else{
            consonants++;
        }

        }
    }
}

