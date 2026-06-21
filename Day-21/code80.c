#include<stdio.h>
void main(){
    char s[100];
    int i , count = 0 ;
    printf("enter  the string :\n");
    scanf("%s" , s);
    for(i = 0 ; s[i] != '\0'; i++){
        count++;
    }
    printf("length of string = %d" , count);
    getchar();
}