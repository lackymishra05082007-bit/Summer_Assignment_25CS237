#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i , len , f=0;
    printf("enter the string:\n");
    scanf("%s" , s);
    len = strlen(s);
    for(i = 0 ; i < len/2 ; i++){
        if(s[i]==s[len-i-1]){
            f=1;
            break;
        }
    }
    if(f)
        printf("palindrome:\n");
    else
        printf("not palindrome:\n");    
    return 0;
}