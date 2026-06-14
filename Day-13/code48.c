#include<stdio.h>
int main(){
    int a[10] , i , n ;
    printf("enter the size of array :");
    scanf("%d" , &n);
    printf("enter the elements of first array: = %d\n" , n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    for(i = 0 ; i < n ; i++){
        printf("%d " , a[i]);
    }
    return 0;
}