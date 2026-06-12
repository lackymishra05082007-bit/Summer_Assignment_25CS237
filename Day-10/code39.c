#include<stdio.h>
int main(){
    int i , j ;
    for ( i = 1 ; i <= 5 ; i++)
    {
        //space
        for ( j = 0 ; j <= 5-i-1 ; j++){
            printf(" ");
        }
        //number
        for (j = 1 ; j <= i ; j++){
            printf("%d" , j );
        }
        for( j = i-1 ; j >= 1 ; j--){
            printf("%d" , j);
        }
        //space
        for(j = 0 ; j <= 5-i-1 ; j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}