#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int k , i , j;
    printf("enter the string:\n");
    fgets(s, sizeof(s) , stdin);
    for(i = 0 ; s[i] != '\0' ; i++){
        for(j = i+1 ; s[j] != '\0';  ){
            if(s[i]==s[j]){
                for(k = j ; s[k] != '\0' ; k++){
                    s[k] = s[k+1];
                }
            }
            else{
                j++;
            }
        }
    } 
    printf("string after removing duplicate =%s" , s);
    return 0;
}