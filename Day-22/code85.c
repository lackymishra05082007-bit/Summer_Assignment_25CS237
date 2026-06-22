#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i , count = 0;
    printf("enter the  sentence:\n");
    fgets(s , sizeof(s) , stdin);
    for(i = 0 ; s[i] != '\0' ; i++){
        if((s[i] != ' ' && s[i] != '\n')&&(s[i+1] == ' ' || s[i+1] == '\n' ||s[i+1] == '\0' )){
            count++;
        }
    }
    printf("number of words = %d" , count);
    return 0;

}