#include<stdio.h>
int main(){
    int x , y , i = 1 , p = 1 ;
    printf("enter the number and the power :");
    scanf("%d%d" , &x , &y);
    while(i<=y){
        p = p*x;
        i = i+1;
    }
    printf(" the power of given number is : = %d" , p);
    return 0;
}
