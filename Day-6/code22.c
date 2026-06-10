#include<stdio.h>
int main(){
    long long n ;
    int decimal = 0 , base = 1 , remainder;
    printf("enter the binary number :");
    scanf("%lld" , &n);
    while ((n>0)){
         remainder = n % 10;
         decimal += remainder*base;
         base *= 2;
         n /= 10;
    }
    printf("%lld" , decimal);
    return 0;
}