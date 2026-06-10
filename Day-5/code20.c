#include<stdio.h>
int main(){
    int n , i , j ,largestprime = -1 ;
    printf("enter the number :");
    scanf("%d" , &n);
    for( i = 2 ; i <= n ; i++){
        if(n % i == 0){
            int prime = 1;
            for( j = 2 ; j*j <= i ; j++){
                if(i % j == 0){
                    prime = 0;
                    break;
                }
           }
           if(prime){
            largestprime = i;
           }

        }
    
    }
    printf(" the largest prime number is = %d" , largestprime);
    return 0;

}