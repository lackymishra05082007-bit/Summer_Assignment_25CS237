#include<stdio.h>
int main(){
    int n  , fact , i , lastdigit , sum = 0  , t;
    printf(" enter the number to check :");
    scanf("%d" , &n);
    t = n;
    while(n>0){
        fact = 1;
        lastdigit = n % 10;
        for( i = 1 ; i <= lastdigit ; i++){
            fact *= i;
        }
        sum += fact;
        n /= 10;    
    }
    if(sum == t)
    printf(" the number is strong number : = %d" , t);
    else
    printf(" the number is not strong : = %d" , t);
    
    return 0;
}