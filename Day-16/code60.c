#include<stdio.h>
int main(){
    int  n , i , a[10] , sum = 0 , total ,  missing;
    printf("enter the array size ");
    scanf("%d" , &n);
    printf("enter the elements = %d\n" , n);
    for(i = 0 ; i < n-1 ; i++){
        scanf("%d" , &a[i]);
        sum += a[i];
    }
    total = n*(n+1)/2;
    missing = total - sum ;
    printf("missing number = %d\n" , missing);
    return 0;

}