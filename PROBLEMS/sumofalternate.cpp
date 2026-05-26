#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 0;
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    printf("%d\t",num);
    for(num;num<=n;num=num+2){
         printf("%d\t",num);
    }
   
    
    return 0;
}