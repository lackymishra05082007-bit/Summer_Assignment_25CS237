#include<stdio.h>
int main(){
    int a[10] , n , i , j ;
    printf("enter the array size:");
    scanf("%d" , &n);
    printf("enter the elements of array = %d\n" , n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("DUPLICATE ELEMENTS: ");
    for(i = 0 ; i < n ; i++){
        for(j = i+1 ; j < n ; j++){
            if(a[i]==a[j]){
                printf("%d " , a[i]);
            }
        }
    }
    return 0;
}