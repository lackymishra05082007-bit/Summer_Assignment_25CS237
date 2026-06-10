#include<stdio.h>
void decimaltobinary(int n){
    if(n==0)
    return ;
    decimaltobinary(n/2);
    printf("%d" , n%2);
}
int main(){
    int n ; 
    printf("enter the decimal number :");
    scanf("%d" , &n);
    if(n==0)
    printf("0");
    else
    decimaltobinary(n);
    return 0;
}