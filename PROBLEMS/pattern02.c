// *
// **
// ***
// ****
// *****

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int col,row;
    printf("enter no of rows :");
    scanf("%d",&row);
    printf("enter no of columns :");
    scanf("%d",&col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(j<=i)
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}