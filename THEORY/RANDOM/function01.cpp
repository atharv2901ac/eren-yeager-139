#include <stdio.h>
#include "common01.h"
int main(int argc, char const *argv[])
{
    int a,b;
    printf("ENTER A NUMBER");
    scanf("%d",&a);
    printf("ENTER A NUMBER");
    scanf("%d",&b);
    swap(&a,&b);
    printf("A:%d,B:%d",a,b);
    return 0;
}
