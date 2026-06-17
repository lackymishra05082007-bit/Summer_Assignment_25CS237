#include<stdio.h>
int main(){
    int  a[50] , b[50] , unionarr[100];
    int n1 , n2 , i , j , k = 0 , found=0;
    printf("enter the array size of first array :");
    scanf("%d" , &n1);
    printf("enter the elements of first array = %d\n" , n1);
    for(i = 0 ; i < n1 ; i++){
        scanf("%d" , &a[i]);
        unionarr[k]=a[i];
        k++;
    }
    printf("enter the array size of second array :");
    scanf("%d" , &n2);
    printf("enter the second array  elements =%d\n" , n2);
    for(i = 0 ; i < n2 ; i++){
        scanf("%d" , &b[i]);
    }
    for(i = 0 ; i < n2 ; i++){
        found=0;
        for(j = 0 ; j < k ; j++){
            if(b[i]==unionarr[j]){
                found = 1 ;
                break;
            }
        }
        if(!found){
            unionarr[k++] = b[i];
        }
    }
    printf("UNION OF ARRAYS\n");
    for(i = 0 ; i < k ; i++){
        printf("%d " , unionarr[i]);
    }
    return 0;
}