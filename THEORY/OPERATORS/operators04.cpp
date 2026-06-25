#include<stdio.h>
int main(){

    char num1 ;
    printf("Enter first number :");
    scanf("%c",&num1);
    int num2;
    printf("Enter second number :");
    scanf("%d",&num2);

    printf("%d\n",num1+num2);
    printf("%d\n",num1-num2);
    printf("%d\n",num1*num2);
    printf("%d\n",num1/num2);
    printf("%d\n",num1%num2);
    return 0;
}