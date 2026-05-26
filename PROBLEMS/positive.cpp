#include <stdio.h>
int main(){
    int num;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    if(num>0)
    printf("FOLLOWING IS A +VE NO.");
    else if(num<0)
    printf("FOLLOWING IS A -VE NO.");
    else
    printf("FOLLOWING IS A ZERO");

}