#include<stdio.h>
int main(){

    char num1 ;
    printf("Enter first number :");
    scanf("%c",&num1);
    char num2;
    printf("Enter second number :");
    scanf("%c",&num2);

    printf("%c\n",num1+num2);
    printf("%c\n",num1-num2);
    printf("%c\n",num1*num2);
    printf("%c\n",num1/num2);
    // printf("%d\n",num1%num2);
    return 0;
}