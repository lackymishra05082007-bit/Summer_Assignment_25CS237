#include<stdio.h>
#include<string.h>
void main(){
    char s[100];
    int i , len;
    len = strlen(s);
    printf("enter the string:\n");
    scanf("%s" , s);
    printf("reversed string:\n");
    for(i = len - 1 ; i >= 0 ; i--){
        printf("%c" , s[i]);
    }
    getchar();
}