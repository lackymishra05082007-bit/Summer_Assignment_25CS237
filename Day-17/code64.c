#include<stdio.h>
int main(){
    int n1 , n2 , i  , a[10] , b[10] , c[10];
    printf("enter the array size of first array:");
    scanf("%d" , &n1);
    printf("enter the elements of array first = %d\n" , n1);
    for(i = 0 ; i < n1 ; i++){
        scanf("%d" , &a[i]);
    }
    printf("enter the array size of second array :");
    scanf("%d" , &n2);
    printf("enter the elements  of second array = %d\n" , n2);
    for(i = 0 ; i < n2 ; i++){
        scanf("%d" , &b[i]);
    }
    for(i = 0 ; i < n1 ; i++){
        c[i] = a[i];
    }
    for(i = 0 ; i < n2 ; i++){
        c[n1+i] = b[i];
    }
    printf("after merging two arrays :");
    for (i = 0 ; i < n1+n2 ; i++){
        printf("%d " , c[i]);
    }
    return 0;
}