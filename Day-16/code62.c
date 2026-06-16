#include<stdio.h>
int main(){
    int n , i , a[10] , s , t  , j , k , f=0 ;
    printf("enter the array size:");
    scanf("%d" , &n);
    printf("enter the elements = %d\n" , n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("enter the sum :");
    scanf("%d" , &s);
    for(i = 0 ; i < n ;i++){
        for(j = i+1 ; j < n ; j++){
            if(a[i]+a[j]==s){
                t= a[i];
                k=a[j];
                f=1;
            }
        }
    }
    if(f)
        printf("the pair are : = %d %d" , t , k);
    else
        printf("PAIR NOT FOUND:") ;   
    return 0;
}