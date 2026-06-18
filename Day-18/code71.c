#include<stdio.h>
int main(){
    int n , i , j , a[50] , t ;
    printf("enter the array size :");
    scanf("%d" , &n);
    printf("enter the elements of array = %d\n" , n);
    for(i = 0 ; i < n ; i++ ){
        scanf("%d" , &a[i]);
    }
    //desecnding order 
    for(i = 0 ; i < n-1 ; i++){
        for(j = i+1 ; j < n ; j++){
            if(a[i]<a[j]){
                t=a[i];
                a[i]= a[j];
                a[j]=t;
            }
        }
    }
    printf("array sorted in descending order :");
    for(i = 0 ; i < n ; i++){
        printf("%d " , a[i]);
    }
    return 0;
}