#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i , j, count ;
    printf("enter a string:\n");
    scanf("%s" , s);
    for(i = 0 ; s[i] != '\0' ; i++){
        count = 1 ;
        for( ; s[i] == s[i+1] ; i++){
                count++;
            }
        printf("%c%d" , s[i] , count);
    }
    return 0 ;
}