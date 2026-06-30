#include<stdio.h>
void quiz();
int main(){ 
    quiz();
    return 0;
}
void quiz(){
    int ans , score = 0;
    printf("====QUIZ APPLICATION\n");
    printf("what is the capital of india?:\n");
    printf("1.delhi.\n2.mumbai.\n3.kolkata\n");
    printf("enter your answer:\n");
    scanf("%d" , &ans);
    if(ans==1){
        printf("ANSWER IS CORRECT:\n");
        score++;
    }
    else{
        printf("WORNG ANSWER:!\ncorrect answer is delhi\n");
    }
    printf("10+20(2)=?\n");
    printf("1.10.\n2.50\n3.60.\n");
    printf("enter your answer:\n");
    scanf("%d" , &ans);
    if(ans==2){
        printf("ANSWER IS CORRECT:\n");
        score++;
    }
    else{
        printf("WRONG ANSWER :!\ncorrect answer is 50:\n");
    }
    printf("which state is known as devbhoomi?\n");
    printf("1.delhi.\n2.punjab.\n3.uttarakhand.\n");
    printf("enter your answer:\n");
    scanf("%d" , &ans);
    if(ans==3){
        printf("correct answer:\n");
        score++;
    }
    else{
        printf("wrong answer!\ncorrect answer is uttarakhand\n");
    }
    printf("quiz is completed\n");
    if(score==3){
        printf("excellent\n");
    }
    else if(score==2){
        printf("great job:\n");
    }
    else{
        printf("better luck next time:\n");
    }
    getchar();
}
