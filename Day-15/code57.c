#include<stdio.h>
int main(){
    int n, i , t , j , r , a[10];
    printf("enter the array size:");
    scanf("%d" , &n);
    printf("enter the elements = %d\n" , n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("enter the no . of rotation ");
    scanf("%d" , &r);
    for(j = 1 ; j <= r ; j++){
        t = a[0];
        for(i = 0 ; i < n-1 ; i++){
            a[i] = a[i+1];
        }
        a[i] = t;
    }
    printf("ELEMENTS AFTER ROTATION ");
    for(i = 0 ; i < n ; i++){
        printf("%d " , a[i]);
    }
    return 0 ;
}