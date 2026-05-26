// *
// **
// ***
// ****
// *****

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int col,row,a;
    a=0;
    printf("enter no of rows :");
    scanf("%d",&row);
    printf("enter no of columns :");
    scanf("%d",&col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {   a+=1;
            if(j<=i)
            printf("%d",a);
        }
        printf("\n");
    }
    
    return 0;
}