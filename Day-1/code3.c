#include<stdio.h>
int main()
{
    int number , i , fact =1;
    printf("enter the number : ");
    scanf("%d" , &number);
    for (i=1 ; i<=number ; i++){
        fact = fact * i;

    }
    printf("factorial of number = %d" , fact);
    return 0;
}