#include<stdio.h>
#include<string.h>
int main(){
    char s[100][50] , temp[100];
    int n , i, j ;
    printf("enter the number of words :\n");
    scanf("%d" , &n);
    printf("enter the words :\n");
    for(i = 0 ; i < n ; i++){
        scanf("%s" , &s[i]);
    }
    for(i = 0 ; i < n-1 ; i++){
        for( j = i+1 ; j < n ; j++){
            if(strlen(s[i]) > strlen(s[j])){
                strcpy(temp , s[i]);
                strcpy(s[i] , s[j]);
                strcpy(s[j], temp);
            }
        }
    }
    printf("\nwords according to length:\n");
    for(i = 0 ; i < n ; i++){
        printf("%s\n" , s[i]);
    }
    return 0;
}