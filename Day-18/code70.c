#include<stdio.h>
int main(){
    int n , i , j , a[50] , s , l , h , mid, f = 0;
    printf("enter the array size :");
    scanf("%d" , &n);
    printf("enter the elements of array  in sorted order = %d\n" , n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    printf("enter the searching element:");
    scanf("%d" , &s);
    l = 0;
    h = n-1;
    do {
        mid = (l+h)/2;
        if(a[mid]==s){
            f=1;
            printf("element is found at position = %d" , mid+1);
            break;
        }
        else if(a[mid]>s){
            h = mid-1;
        }
        else{
            l = mid+1;
        }    
    }
    while(l <= h && a[mid != s ]);
        if(f==0)
            printf("unsearch element :");
    

    return 0;
}