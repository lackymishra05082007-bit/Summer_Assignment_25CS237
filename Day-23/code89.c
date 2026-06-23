#include<stdio.h>
#include<string.h>
int main(){
    char s1[100] ,s2[100];
    int count[256] ={0};
    int i;
    printf("enter the string first:\n");
    scanf("%s" , s1);
    printf("enter the string second:\n");
    scanf("%s" , s2);
    if(strlen(s1) != strlen(s2)){
        printf("not anagram string:\n");
        return 0;
    }
    for(i = 0 ; s1[i] != '\0' ; i++){
        count[(unsigned char) s1[i]]++;
        count[(unsigned char) s2[i]]--;
    }
    for(i = 0 ; i < 256 ; i++){
        if(count[i] != 0){
            printf("not anagram:\n");
            return 0;
        }
    }
    printf("strings are anagram:\n");
    return 0;
}