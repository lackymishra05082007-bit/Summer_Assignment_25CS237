#include<stdio.h>
#include<string.h>
void main(){
    char ch ;
    int i ;
    printf("enter the alphabet:\n");
    scanf("%c" , &ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='o'||ch=='u'){
        printf("ALPHABET IS VOWEL:\n");
    }
    else{
        printf("ALPHABET IS CONSONANT:\n");
    }
    getchar();
}