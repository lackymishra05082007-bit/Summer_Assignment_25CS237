#include<stdio.h>
int sum(int n){
    int  sum =0;
    for (int i = 1 ; i <= n ; i++ ){
        sum += i;

    }
    return sum;
}
int main(){
    int n ;
    printf("enter the number :");
    scanf("%d" , &n);
    printf(" the sum of %d natural numbers is = %d\n" , n , sum(n));
    sum(n);
    return 0;
}