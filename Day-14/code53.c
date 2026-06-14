#include<stdio.h>
int main(){
    int n , s , a[10] , i , count = 0 ;
    printf("enter the array size :");
    scanf("%d" , &n);
    printf("enter the elements = %d\n" , n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("enter the searching element:");
    scanf("%d" , &s);
    for(i = 0 ; i < n ; i++){
        if(a[i] == s){
            count++;
        }
    }
    printf("FREQUENCY OF ELEMENT = %d" , count);
    return 0;
}