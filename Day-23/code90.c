#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int count[256]={};
    int i , max = 0;
    char maxcharacter;
    printf("enter the string :\n");
    fgets(s , sizeof(s) , stdin);
    for(i = 0 ; s[i] != '\0' ; i++){
        count[(unsigned char) s[i]]++;
    }
    for(i = 0 ; i < 256 ; i++){
        if(count[i]>max){
            max=count[i];
            maxcharacter = i;
        }
    }
    printf("maximum occuring character =%c" , maxcharacter);
    printf("frequency =%d" , max );
    return 0;
}