#include<stdio.h>
int main (){
    int n1 , n2 , i , j;
    printf("enter the number 1 and 2:");
    scanf("%d%d" ,&n1,&n2);
    for(i = n1 ; i <= n2 ; i++) 
    {
        for(j = 2 ; j < i ; j++)
        {
            if(i%j==0)
            break;
        }
        if(j==i)
        printf("%d\n" , i);

    }
    return 0;
}    