#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int i , len = 0 , max=0;
    int start=0 , maxstart=0;
    printf("enter the sentence:\n");
    fgets(s , sizeof(s) , stdin);
    for(i = 0 ; s[i] != '\0' ; i++){
        if(s[i] != ' ' && s[i] != '\n'){
            len++;
        }
        else{
            if(len>max){
                max = len;
            }   maxstart=start;
            len=0;
            start=i+1;
        }
    }
    printf("longest word is:\n");
    for(i = maxstart ; i < maxstart + max ; i++){
        printf("%c" , s[i]);
    }
    printf("\nlength = %d" , max);
    return 0;
}