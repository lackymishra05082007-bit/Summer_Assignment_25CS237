#include<stdio.h>
int main(){
    int r, c , i , j , a[10][10] , sum ;
    printf("enter the rows and columns of matrix:\n");
    scanf("%d%d" , &r , &c);
    printf("enter the elements of matrix :\n");
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    printf("row wise sum of matrix:\n");
    for(i = 0 ; i < r ; i++){
        sum = 0;
        for(j = 0 ; j < c ; j++){
            sum = sum +a[i][j];
        }
        printf("the sum of row %d = %d\n" , i+1 , sum);
    }
    return 0;
}