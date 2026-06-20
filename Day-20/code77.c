#include<stdio.h>
int main(){
    int i , j , r , c , a[10][10] , f=1;
    printf("enter the rows and columns:\n");
    scanf("%d%d" , &r , &c );
    printf("enter the elements of matrix :\n");
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j++){
            scanf("%d" , &a[i][j]);
        }
    }
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c ; j ++){
            if(a[i][j]!=a[j][i]){
                f=0;
                break;
            }
        }
    }
    if(f)
        printf("MATRIX IS SYMMETRIC:\n");
    else
        printf("NOT SYMMETRIC MATRIX:\n");    
    return 0;
}