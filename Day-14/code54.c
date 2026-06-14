#include<stdio.h>
int main(){
    int n , i , j , a[10],  max , secondlargest ;
    printf("enter the array size :");
    scanf("%d" , &n);
    printf("enter the elements = %d\n" , n);
    for(i =  0 ; i < n ; i++){
        scanf("%d" , &a[i]);
    }
    max = a[0];
    secondlargest = a[0];
    for (i = 1 ; i < n ; i++){
        if(a[i]>max){
            secondlargest = max ;
            max= a[i];
        }
        else if(a[i] > secondlargest && a[i] != max){
            secondlargest = a[i];
        }
    }
    printf("SECOND LARGEST NUMBER : = %d" , secondlargest);
    return 0;
    
}