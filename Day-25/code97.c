#include<stdio.h>
#include<string.h>
int main(){
    char s[100][50],temp[100];
    int n , i , j ;
    printf("enter the number of names:\n");
    scanf("%d" , &n);
    printf("enter the names:\n");
    for(i = 0 ; i < n ; i++){
        scanf("%s" , s[i]);
    }
    for(i = 0 ; i < n-1 ; i++){
        for(j = i+1 ; j < n ; j++){
            if(strcmp(s[i],s[j]) > 0){
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
    printf("\nName in alphabetical order :\n");
    for(i = 0 ; i < n ; i++){
        printf("%s\n" , s[i]);
    }
    return 0 ;
}