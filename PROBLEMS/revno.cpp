#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    int rev = 0;
    
    while(num != 0){
        int r = num%10;
        rev = rev*10+r;
        num = num/10;
    }
    printf("reverse of number is :%d\n",rev);
    if(num=rev)
        printf("FOLLOWING NO. IS A PALINDROME");
    else
        printf("FOLLOWING IS NOT A PALINDROME");
return 0;
}