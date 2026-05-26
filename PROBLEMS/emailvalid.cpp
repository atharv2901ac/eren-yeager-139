#include <stdio.h>
int main(int argc, char const *argv[])
{
    char email[20];
    printf("ENTER YOUR EMAIL ID: ");
    scanf("%s",&email);

    int isATpresent = 0;
    int atpresentIdx = -1;
    int isDotpresent = 0;
    int dotpresentIdx = -1;
    int IsAtduplicate = 0;
    for(int i=0; email[i]!='\0'; i++){
        if(email[i]=='@'){
            if(atpresentIdx != -1){
                IsAtduplicate = 1;
            }
            isATpresent = 1;
            atpresentIdx = i;
        }
        if(email[i]=='.'){
            isDotpresent = 1;
            dotpresentIdx = i;
        }
    }
    if(IsAtduplicate==0 && isATpresent==1 && isDotpresent==1 && atpresentIdx<dotpresentIdx){
        printf("EMAIL IS VALID");
    }
    else{
        printf("EMAIL IS INVALID/ NOT VALID");
    }
    return 0;
}
