#include<stdio.h>
int main(){
    int n , countodd = 0 , counteven = 0 , i , a[10];
    printf("enter the size of array : ");
    scanf("%d" , &n );
    printf("enter the elements = %d\n" , n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    for ( i = 0 ; i < n ; i++){
        if(a[i]%2==0)
            counteven++;  
        else
            countodd++;      
    }
    printf("NO. OF EVEN ELEMNTS = %d\n" , counteven);
    printf("NO. OF ODD ELEMNTS = %d\n" ,  countodd);
    
    return 0;
    
}