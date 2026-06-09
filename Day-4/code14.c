#include<stdio.h>
int main(){
    int n , a= 0, b = 1 , i , c;
    printf("enter the nth term you want to find :");
    scanf("%d" , &n);
    if (n==a){
        printf("%d" , a);
    }
    else if(n==b){
        printf("%d" , b);
    }
    else{
        for(i = 3 ; i <= n ; i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf(" nth term is: %d" , b);
    }
    return 0;
}