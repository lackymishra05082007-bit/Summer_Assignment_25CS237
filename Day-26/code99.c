#include<stdio.h>
int main(){
    int age ;
    printf("enter the age :\n");
    scanf("%d" , &age);
    if(age>=18){
        printf("ELIGIBLE FOR VOTE:\n");
    }
    else{
        printf("NOT ELIGIBLE FOR VOTE:\n");
    }
    return 0;
}