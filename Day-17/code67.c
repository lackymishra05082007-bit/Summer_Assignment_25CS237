#include<stdio.h>
int main(){
    int n1 , n2 ,  i , j , found = 0;
    int a[50] , b[50] , c[100];
    printf("enter the first array size :");
    scanf("%d" , &n1);
    printf("enter the elements of first array = %d\n" , n1);
    for(i = 0 ; i < n1 ; i++){
        scanf("%d" , &a[i]);
    }
    printf("enter the size of second array :");
    scanf("%d" , &n2);
    printf("enter the elements of second array = %d\n" , n2);
    for(i = 0 ; i < n2 ; i++){
        scanf("%d" , &b[i]);
    }
    printf("common elements are given below : ");
    for(i = 0 ; i < n1 ; i++){
        for(j = 0 ; j < n2 ; j++){
            if(a[i] == b[j]){
                printf("%d " , a[i]);
                found=1;
                break;
            }
        }
    }
    if(found==0)
        printf("no common elements");
    return 0;    
}