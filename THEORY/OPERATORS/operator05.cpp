#include<stdio.h>
int main(){

    char num1 ;
    printf("Enter first number :");
    scanf("%c",&num1);
    float num2;
    printf("Enter second number :");
    scanf("%f",&num2);

    printf("%f\n",num1+num2);
    printf("%f\n",num1-num2);
    printf("%f\n",num1*num2);
    printf("%f\n",num1/num2);
    // printf("%d\n",num1%num2);
    return 0;
}