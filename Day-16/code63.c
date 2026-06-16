#include<stdio.h>
int main(){
    int n , i , j , a[10] , t;
    printf("enter the array size:");
    scanf("%d" , &n);
    printf("enter the element =%d\n" , n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n-i-1 ; j++){
            if(a[j]>a[j+1]){
                t = a[j];
                a[j]=a[j+1];
                a[j+1]= t;
            }
        }
    }
    printf("ARRAY AFTER REMOVING DUPLICATES ELEMENTS\n");
    for(i = 0 ; i < n ; i++){
        if(i==0 || a[i] != a[i-1]){
            printf("%d " , a[i]);
        }
    }
    return 0;
}