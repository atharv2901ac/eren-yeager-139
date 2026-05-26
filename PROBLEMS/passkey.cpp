#include<stdio.h>
int main()
{
    int choice = 0;
    while(choice != 2901){
        printf("INCORRECT PASS\n");
        printf("enter pass to exit");
        scanf("%d",&choice);
    }
    return 0;
}