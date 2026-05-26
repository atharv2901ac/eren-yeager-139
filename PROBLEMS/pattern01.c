// ******
// ******
// ******
// ******

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int col,row;
    printf("enter no of rows :");
    scanf("%d",&row);
    printf("enter no of rows :");
    scanf("%d",&col);
    int total = row*col;
    for(int i=0;i<total;i++){
        if(i%col == 0)
        printf("\n");
        printf("*");
    }
    
    return 0;
}