#include<stdio.h>
int palindrome(int n , int rev){
    if(n==0)
        return rev;
    return palindrome(n/10 ,rev*10 + n%10 );   
}
int main (){
    int n  ,rev;
    printf("enter the number :");
    scanf("%d" , &n);
    rev = palindrome(n , 0);
    if(n==rev)
        printf("the number is palindrome:)");
    else
        printf("not palindrome:");
    return 0;        
}
