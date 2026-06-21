#include<stdio.h>
void main(){
    char s[100] ;
    int i ;
    printf("enter the words:\n");
    fgets(s , sizeof(s) , stdin);
    for(i = 0 ; s[i] != '\0' ; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32;
        }
    }
    printf("uppercase string :%s" , s);
    getchar();
}