#include<stdio.h>
int prime(int n ){
    int i ;
    if(n <= 0)
        return 0;
    for(i = 2 ; i < n ; i++)
        if(n%i==0)
            return 0;
    return 1 ;        
}
int main(){
    int n ;
    printf("enter the number :");
    scanf("%d" , &n);
    if (prime(n))
        printf("the number is prime = %d" , n);
    else
        printf("the number is not prime = %d" , n);
    prime(n);
    return 0; 
}