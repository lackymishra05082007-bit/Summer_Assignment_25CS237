#include<stdio.h>
int main(){
    int n , lastdigit, rev = 0 , i ;
    printf("enter the number :");
    scanf("%d" , &n);
    for(i = 1 ; i <= n ; i++){
        lastdigit = n % 10;
        rev = (rev*10) + lastdigit;
        n = n/10;

    }
    printf("The reverse of the number is : = %d" , rev);
    return 0;
}