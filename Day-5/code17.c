#include<stdio.h>
int main(){
    int n , i , sum = 0 , t; 
    printf("enter the number to check :");
    scanf("%d" , &n);
    t=n ;
    for(i = 1 ; i < n ; i++){
        if(n%i==0){
            sum =  sum + i;
        }
    }
    if(sum==t){
        printf("the number is perfect number : = %d" , sum );
    }
    else{
        printf(" the number is not perfect number : = %d" , sum );
    }
    return 0;

}