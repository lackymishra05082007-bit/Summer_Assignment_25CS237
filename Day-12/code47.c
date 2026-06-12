#include<stdio.h>
int fibonacci(int n){
    int i , a =0 , b=1 , c;
    for(i = 0 ; i <= n ; i++){
        printf("%d " , a);
        c = a+b;
        a=b;
        b=c;
    }   
}
int main(){
    int n ;
    printf("enter the number:");
    scanf("%d" , &n);
    fibonacci(n);
    return 0;
}
