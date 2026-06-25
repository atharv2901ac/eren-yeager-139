#include<stdio.h>
int main(){

    float num1 ;
    printf("Enter first number :");
    scanf("%f",&num1);
    int num2;
    printf("Enter second number :");
    scanf("%d",&num2);

    printf("%f\n",num1+num2);
    printf("%f\n",num1-num2);
    printf("%f\n",num1*num2);
    printf("%f\n",num1/num2);
    // printf("%d\n",num1%num2);
    return 0;
}