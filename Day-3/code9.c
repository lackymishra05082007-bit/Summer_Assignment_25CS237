#include<stdio.h>
int main(){
    int n , i , count=0 ;
    printf("enter the number : " );
    scanf("%d" , &n);
    for(i=1 ; i<=n ; i++){
        if(n%i==0){
            count += 1;
        }

    }

    if(count==2){
        printf("th number is prime :");
    }

    else{
        printf("the number is not prime :");
    }

     return 0;
}   