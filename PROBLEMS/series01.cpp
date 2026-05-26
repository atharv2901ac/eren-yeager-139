#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 1;
    printf("%d\t",num);
    for(num;num<=10000000;num=num+num){
        if(num+num < 10000000)
         printf("%d\t",num+num);
    }
   
    
    return 0;
}