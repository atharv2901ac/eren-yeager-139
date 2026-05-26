#include <stdio.h>
int main(){
float f,c;
printf("Enter The Temperature: ");
scanf("%f",&f);
c = (f-32)*5/9;
printf("Following Temperature in Centigrade is %f",c);
return 0;
}