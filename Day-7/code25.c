#include<stdio.h>
int factorial(int n){
    if(n==0 || n==1)
        return 1;
    else 
        return n * factorial(n - 1);

}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d" , &n);
    if(n<0)
        printf("the number is negative:");
    else 
        printf("the factorial of number is : = %d" ,  factorial(n));
    factorial(n);
    return 0;        
}