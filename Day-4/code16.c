#include<stdio.h>
int main(){
    int n1 , n2 , i , j , t , count , lastdigit;
    long long sum , power;
    printf("enter the two number :");
    scanf("%d%d" , &n1 , &n2);
    for(i = n1 ; i <= n2 ; i++){
        t = i;
        count = 0;
        while(t>0){
            count++;
            t /= 10;
        }
        t = i;
        sum = 0;
        while(t>0){
            lastdigit = t%10;
            power = 1;
            for( j = 0 ; j < count ; j++){
                power *= lastdigit;
            }
            sum += power;
            t /= 10;
        }
        if(sum==i){
            printf("%d " , i);
        }
    }
    return 0;

}