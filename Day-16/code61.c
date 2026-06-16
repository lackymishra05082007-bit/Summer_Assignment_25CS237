#include<stdio.h>
int main(){
    int n, i , j , a[10] , count = 0 , t = 0 , element ;
    printf("enter the array size :" );
    scanf("%d" , &n);
    printf("enter the elements  = %d\n" , n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    for(i = 0 ; i < n ; i++){
        count = 1;
        for(j = i+1 ; j < n ; j++){
            if(a[i] == a[j]){
                count++;
            }
        }
        if(count > t){
            t = count ;
            element = a[i];
        }
    }
    printf("maximum frequency element =%d\n" , element);
    printf(" count = %d\n" , t);
    return 0;
}