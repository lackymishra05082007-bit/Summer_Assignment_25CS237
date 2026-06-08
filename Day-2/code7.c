#include<stdio.h>
int main(){
    int n , i , product =1 , lastdigit ;
    printf("enter the number :");
    scanf("%d" , &n);
    for (i = 1 ; i <= n ; i++){
        lastdigit = n % 10;
        product = product*lastdigit;
        n = n/10;

    }
    printf("the product is : = %d " , product);
    return 0;
}