#include <stdio.h>
int main() 
{
float a, b, c, D, root1, root2;
printf("enter a,b,c");
scanf("%f %f %f", &a, &b, &c);
D = b * b - 4 * a * c;
if (D > 0) 
{
root1 = (-b+(D*D))/(2*a);
root2 = (-b-(D*D))/(2*a);
printf("Roots are real and different:%f,%f",root1,root2);
}
else if (D == 0) 
{
root1 = -b / (2 * a);
printf("Roots are real and same:%f", root1);
}
else
{
printf("Roots are complex");
}
return 0;
}
