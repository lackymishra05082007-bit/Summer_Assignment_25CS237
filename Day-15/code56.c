#include<stdio.h>
int main(){
    int n , i , j , a[10] ;
    printf("enter the array size :");
    scanf("%d" , &n);
    printf("enter the elements = %d\n" , n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("THE REVERSE ARRAY :");
    for(i = n-1 ; i >=0  ; i--){
        printf("%d " , a[i]);
        }
    return 0;
}    