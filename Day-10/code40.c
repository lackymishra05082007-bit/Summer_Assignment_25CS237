#include<stdio.h>
int main(){
    int i , j ;
    for( i = 0 ; i < 5 ; i++){
        //space
        for(j = 1 ; j <= 5-i-1 ; j++){
            printf(" ");
        }
        //alphabet
        for(j = 0 ; j <= i ; j++){
            printf("%c" ,'A'+ j);
        }
        for(j = i-1; j >= 0 ; j--){
            printf("%c" , 'A'+j);
        }
        //space
        for(j = 1 ; j <= 5-i-1 ; j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}