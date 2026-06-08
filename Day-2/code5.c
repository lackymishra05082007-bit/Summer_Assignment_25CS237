#include<stdio.h>
// to input the number , and intializing the sum =0;
int main(){
    int n , i , sum = 0  , lastdigit ;
    printf("enter the number :");
    scanf("%d" , &n);
    for ( i = 1 ; i <=n ; i++){
        lastdigit = n % 10;
        n = n/10;
        sum = sum + lastdigit ;
    }
    printf("the sum of digit is  = %d" , sum);
    return 0;
}
