#include<stdio.h>
#include<string.h>
int main(){
    char s1[100] , s2[100] , temp[100];
    printf("enter the first string:\n");
    fgets(s1 , sizeof(s1) , stdin);
    printf("enter the second string:\n");
    fgets(s2 , sizeof(s2) , stdin);
    if(strlen(s1) != strlen(s2)){
        printf("no rotation string:\n");
        return 0;
    }
    strcpy(temp , s1);
    strcpy(temp , s2);
    if(strstr(temp , s2))
        printf("ROTATION:\n");
    else 
        printf("NOT A ROTATION:\n");
    return 0;
}