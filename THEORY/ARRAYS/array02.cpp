#include <stdio.h>
#include "common01.h"
int main(int argc, char const *argv[])
{
    int size;
    printf("ENTER SIZE OF COLLECTION: ");
    scanf("%d",&size);
    int nums[size];
    
    for(int a=0; a<size; a++){
        printf("ENTER THE VALUES INCLUDED IN THE COLLECTION: ");
        scanf("%d",&nums[a]);
    }
    printf("FOLLOWING COLLECTION: ");
    for(int i=0; i<size; i++){
        printf("%d",nums[i]);
        printf(",");
    }
    
    asc(nums,size);
    printf("ASCENDING ORDER: %d\n");
    for(int i=0; i<size; i++){
        printf("%d",nums[i]);
        printf(",");
    }
    /*
    dsc(nums,size);
    printf("DESCENDING ORDER: %d\n");
    for(int i=0; i<size; i++){
        printf("%d",nums[i]);
        printf(",");
    }
    right(nums,size);
    printf("RIGHT MOVE: %d\n");
    for(int i=0; i<size; i++){
        printf("%d",nums[i]);
        printf(",");
    }
    left(nums,size);
    printf("LEFT MOVE: %d\n");
    for(int i=0; i<size; i++){
        printf("%d",nums[i]);
        printf(",");
    }
    */
    return 0;
}