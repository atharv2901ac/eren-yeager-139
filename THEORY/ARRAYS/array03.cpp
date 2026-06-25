#include <stdio.h>
#include "common01.h"
int main(int argc, char const *argv[])
{
    char name[50];
    char name02[20];
    printf("ENTER YOUR NAME: ");
    scanf("%[^\n]s",&name);
    printf("ENTER ANOTHER NAME: ");
    scanf("%s",&name02);
    printf("YOUR NAME IS %s %s\n", name,name02);
    printf("SIZE: %d\n ", len(name));
    if(compare(name,name02)==true){
        printf("BOTH NAMES ARE SAME\n");
    }
    else{
        printf("BOTH NAMES ARE NOT SAME\n");
    }

    return 0;
}