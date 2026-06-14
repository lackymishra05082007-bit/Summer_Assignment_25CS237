#include<stdio.h>
int main(){
    int a[10] , i , j , n , max , min ;
    printf("enter the sze of array :");
    scanf("%d" , &n);
    printf("enter the elemnts of array : = %d\n" , n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    max = min = a[0];
    for( i = 0 ; i < n ; i++){
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }
    printf(" MAXIMUM ELEMENT = %d " , max);
    printf("MINIMUM ELMENT = %d" , min);
    
    return 0;
}
