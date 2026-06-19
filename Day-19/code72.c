#include<stdio.h>
int main (){
    int a[10][10] , i , j , r , c , b[10][10] , add[20][20];
    printf("enter the number of rows and colums  for  matrix: ");
    scanf("%d%d" , &r , &c);
    printf("enter th elements for first matrix :\n");
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    printf("enter the elements of second matrix :\n");
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            scanf("%d" , &b[i][j]);
        }
    }
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            add[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("AFTER ADDITION MATRIX:\n");
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            printf("%d " , add[i][j]);
        }
        printf("\n");
    }
    return 0;
}