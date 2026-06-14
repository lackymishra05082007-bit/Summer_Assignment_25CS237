#include<stdio.h>
int main(){
    int i , n , a[10] ;
    int  sum = 0 ;
    float avg ;
    printf("enter the size of array:");
    scanf("%d" , &n);
    printf("enter the elements of array : = %d \n" , n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
        sum += a[i] ;
    }
    avg = (float)sum /n;
    printf("sum =%d \n " , sum );
    printf("avgerage =%.2f\n" , avg);

    return 0;
}
