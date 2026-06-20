#include<stdio.h>
int main(){
    int r1 , c1 , r2 , c2 , a[10][10] , b[10][10] , multi[10][10] ;
    int i , j , k;
    printf("enter the rows and columns for first matrix :\n");
    scanf("%d%d" , &r1 ,&c1);
    printf("enter the rows and columns for second matrix:\n");
    scanf("%d%d" , &r2 , &c2);
    if(c1!=r2){
        printf("MULTIPLICATION IS NOT  POSSIBLE:\n");
        return 0;
    }
    printf("enter the elements of first matrix elements:\n");
    for(i = 0 ; i < r1 ; i++){
        for(j = 0 ; j < c1 ; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    printf("enter the elements of second matrix :\n");
    for(i = 0 ; i< r2 ; i++){
        for(j = 0 ; j < c2 ; j++){
            scanf("%d" , &b[i][j]);
        }
    }
    for(i = 0 ; i < r1 ; i++){
        for(j = 0 ; j < c2 ; j++){
            multi[i][j] = 0;
            for(k = 0 ; k < c1 ; k++){
                multi[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    printf("MATRIX MULTIPLICATION:\n");
    for(i = 0 ; i < r1 ; i++){
        for(j = 0 ; j < c2 ; j++){
            printf("%d " , multi[i][j]);
        }
        printf("\n");
    }
    return 0;
}