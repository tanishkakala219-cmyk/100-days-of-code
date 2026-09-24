#include <stdio.h>
int main() 
{
float p, r, t;
float si, ci;
scanf("%f %f %f", &p, &r, &t);
si = (p * r * t) / 100;
ci = p * ((1 + r / 100), t) - p;
printf("Simple Interest=%f", si);
printf("Compound Interest=%f", ci);
return 0;
}
