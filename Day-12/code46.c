#include<stdio.h>
#include<math.h>
int armstrong(int n ){
    int lastdigit , count = 0,  t ;
    int sum = 0;
    t = n;
    while(t!=0){
        count++;
        t/=10;
    }    
    t = n;    
    while(t!=0){
        lastdigit = t%10;
        sum +=  pow(lastdigit , count);
        t /= 10;
    }    
    return sum ;    
}
int main(){
    int n ;
    printf("enter the number:");
    scanf("%d" , &n);
    if(armstrong(n)==n)
        printf("ARMSTRONG NUMBER");
    else
        printf("NOT ARMSTRONG");
    return 0;        
}
