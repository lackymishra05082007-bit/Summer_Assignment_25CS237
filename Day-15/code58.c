#include<stdio.h>
int main(){
    int n , i , j , a[10], r , t;
    printf("enter the array size:");
    scanf("%d" , &n);
    printf("enter the elements =%d\n" , n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("enter the no of rotations :");
    scanf("%d" , &r);
    for(j = 1 ; j <= r ; j++){
        t = a[n-1];
        for(i = n-1 ; i > 0 ; i--){
            a[i] = a[i-1];
        }
        a[0]= t;
    }
    printf("after right rotation:\n");
    for(i = 0 ; i < n ; i++){
        printf("%d " , a[i]);
    }
return 0 ;
}