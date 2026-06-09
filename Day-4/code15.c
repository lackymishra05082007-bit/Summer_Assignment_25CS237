#include<stdio.h>
int main(){
    long long n, s ,t , lastdigit;
    long long sum = 0 , pow;
    int i , count = 0;
    printf("enter the number you want to check :");
    scanf("%lld", &n);
    t = n;
    s = n;
    while(s>0){
        count++;
        s /= 10;
    }
    s=n;
    //armstrong sum  calculate
    while(s>0){
        lastdigit = s % 10;
        pow = 1;
        for(i = 0 ; i < count ; i++){
            pow *= lastdigit;
        }
        sum += pow;
        s /= 10;
    }
    if(sum == t)
        printf("the number is armstrong %lld" , t);

    else
        printf("the number is not armstrong %lld" , t);

    return 0;
}    
