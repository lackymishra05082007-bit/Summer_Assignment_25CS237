#include<stdio.h>
int main(){
    int n , i , a[10] , s , f=0 ;
    printf("enter the array size :");
    scanf("%d" , &n);
    printf("enter the elements = %d\n" , n );
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("enter the element you want to search:");
    scanf("%d" , &s);
    for(i =0 ; i < n ; i++){
        if(a[i]==s){
            f=1;
            printf("the search element is found at position = %d" , i+1);
            break;
        }    
    }    
        if(f==0)
        {
            printf("the element is not found");
        }
    return 0;    
}