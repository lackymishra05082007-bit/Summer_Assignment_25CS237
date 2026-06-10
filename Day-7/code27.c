#include<stdio.h>
int sum(int n1 , int n2){
    if(n1<0 && n2<0)
        return 0;
    else 
        return n1+n2;    
}
int main(){
    int n1 , n2 ;
    printf("enter the number:");
    scanf("%d%d" , &n1 , &n2);
    printf("%d" , sum(n1, n2));
    sum(n1,n2);
    return 0;
}
