#include<stdio.h>
int reverse(int n , int rev){
    if(n==0)
        return rev;
    else
        return reverse(n/10 , rev*10 +  n%10);
}
int main(){
    int n ; 
    printf("enter the number:");
    scanf("%d" , &n);
    printf("the reverse number is = %d" , reverse(n , 0));
    return 0;
}