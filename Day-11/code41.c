#include<stdio.h>
int sum(int a , int b ){
    if(a==0 || b==0)
        return 0;
        return (a+b);
}
int main (){
    int a , b ;
    printf("enter a and b :");
    scanf("%d%d" , &a , &b);
    printf("%d" , sum(a, b));
    sum(a, b);
    return 0;
}