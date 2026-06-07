#include<stdio.h>
int main (){
    int number , count = 0 ;
    printf("enter the number :");
    scanf("%d" , &number);
    while (number >0){
        count = count +1;
        number = number / 10;
    }
    printf(" number of digits = %d  " , count);
    return 0; 

}