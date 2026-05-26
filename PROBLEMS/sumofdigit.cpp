#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter a number :");
    scanf("%d",&num);

    int sum  = 0;
   
    
         while(num != 0){
            int r = num%10;
            sum = sum+1;
            num = num/10;
        }
    
   
    printf("no of digits is :%d",sum);
    return 0;
}