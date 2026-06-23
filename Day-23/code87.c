#include<stdio.h>
int main(){
    char s[100];
    int i , j , count = 0;
    printf("enter the string:\n");
    fgets(s , sizeof(s) , stdin);
    for(i = 0 ; s[i] != '\0' ; i++){
        count = 0;
        for(j = 0 ; s[j] != '\0' && s[j] != '\n' ; j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count==1){
            printf("%c" , s[i]);
        }
    }
    return 0;
}