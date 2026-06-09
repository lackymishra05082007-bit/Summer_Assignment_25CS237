#include<stdio.h>
int main(){
    int n1 , n2 , lcm ;
    printf(" enter the two numbers:");
    scanf("%d%d" , &n1 , &n2);
    for(lcm = (n1>n2 ? n1:n2) ; ; lcm++)
    {
        if(lcm%n1==0 && lcm%n2==0)
        {
            printf("the lcm is % d" , lcm);
            break;
        }
    }
    return 0;

}
