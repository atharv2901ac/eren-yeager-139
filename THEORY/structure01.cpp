#include<stdio.h>
struct loc{
    char pincode[6];
    char city[50];
    char state[50];
};
struct citizen{
    char name[20];
    int age;
    char gender[1];
    loc address;
};
int main(int argc, char const *argv[])
{
    citizen* n;
    printf("ENTER YOUR NAME: ");
    scanf("%s", &n->name);
    printf("ENTER YOUR AGE: ");
    scanf("%d", &n->age);
    printf("ENTER YOUR GENDER: ");
    scanf("% s",&n->name);
    printf("NAME: %s\t AGE: %d\t GENDER: %s\t", n->name, n->age, n->gender);
    return 0;
}
