#include <stdio.h>
int main() 
{
int first, second, temp;
printf("Enter first number: ");
scanf("%d", &first);
printf("Enter second number: "); 
scanf("%d", &second);
printf("First number = %d", first);
printf("Second number = %d", second);
temp = first;  
first = second;
second = temp; 
printf("First number = %d", first);
printf("Second number = %d", second);
return 0;
}
