#include<stdio.h>
int main(){
    int r , c, i , j , a[10][10] , sum = 0;
    printf("enter the rows and columns :\n");
    scanf("%d%d" , &r , &c);
    printf("enter the elements of matrix:\n");
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            if(i==j){
                sum += a[i][j];
            }
        }
    }
    printf(" the sum of diagonal = %d" , sum );
    return 0; 

}