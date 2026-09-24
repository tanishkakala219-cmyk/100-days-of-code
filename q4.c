#include <stdio.h>
int main() 
{
float radius, area, circumference;
float PI = 3.14159;
printf("enter radius");
scanf("%f", &radius);
area = PI * radius * radius;
circumference = 2 * PI * radius;
printf("Area=%f, Circumference=%f", area, circumference);
return 0;
}
