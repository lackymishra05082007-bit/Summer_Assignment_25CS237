#include<stdio.h>
int main(){
    int n , i , t , rev = 0 , lastdigit ;
    printf("enter the number :");
    scanf("%d" , &n);
    t = n;
    for ( ; n  != 0 ; n = n/10 ){
        lastdigit = n % 10;
        rev =(rev*10) + lastdigit;
    }    
        if(t==rev){
            printf(" the number is palindrome : = %d "  , t );

        }
        else {
            printf("the number is not palindrome: = %d" , t);

        }
        return 0;

    
}