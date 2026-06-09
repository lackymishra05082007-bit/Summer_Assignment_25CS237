#include<stdio.h>
int main(){
    int x1 , x2 ;
    printf("enter the x1 and x2 :");
    scanf("%d%d" , &x1 , &x2);
    while(x1 != x2){
        if(x1>x2){
            x1 = x1 - x2;
        }
        else{
            x2 = x2 - x1;
        }
    }
    printf("%d" , x1);
    return 0;
}