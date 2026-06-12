#include<stdio.h>
int main(){
    int i , j ;
    for(i = 0 ; i < 5 ; i++){
        //space
        for(j = 0 ; j < i ; j++){
            printf(" ");
        }
        //star
        for(j = 0 ; j < 2*5 -(2*i+1) ; j++)
        {
            printf("*");
        }
        //space
        for(j = 0 ; j < i ; j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;    
}