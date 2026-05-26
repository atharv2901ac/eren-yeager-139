#include <stdio.h>
#include "common01.h"
int main(int argc, char const *argv[])
{
    int size;
    printf("ENTER SIZE OF COLLECTION: ");
    scanf("%d",&size);
    int nums[size];
    int value;
    printf("ENTER YOUR DESIRED VALUE: ");
    scanf("%d",&value);

    for(int a=0; a<size; a++){
        printf("ENTER THE VALUES INCLUDED IN THE COLLECTION: ");
        scanf("%d",&nums[a]);
    }
    printf("FOLLOWING COLLECTION: ");
    for(int i=0; i<size; i++){
        printf("%d",nums[i]);
        printf(",");
    }
    printf("\n");
    printf("SUM OF ALL THE ELEMENTS IS: %d\n", sum(nums, size));
    printf("AVERAGE OF ALL THE ELEMENTS IS: %d\n", avg(nums, size));
    printf("LARGEST ELEMENT IN THE ARRAY IS: %d\n", largest(nums, size));
    printf("SMALLEST ELEMENT IN THE ARRAY IS: %d\n", smallest(nums, size));
    printf("ELEMENT FOUND: %d\n", contains(nums, size, value));
    printf("INDEX OF THE ELEMENT IS: %d\n", indexof(nums, size, value));
    printf("LAST INDEX OF THE ELEMENT IS: %d\n", lastindexof(nums, size, value));
    return 0;
}
