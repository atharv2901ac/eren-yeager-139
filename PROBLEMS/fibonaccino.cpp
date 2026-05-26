#include <stdio.h>
int main(){
    int n, a, b, next;
    printf("Enter No. You Desire: ");
    scanf("%d",&n);
    a = 0;
    b = 1;
    printf("%d\t %d\t", a, b);
    for(int i=3; i<=n; i++){
        next=a+b;
        printf("%d\t",next);
        a = b;
        b = next;
    }
return 0;
}