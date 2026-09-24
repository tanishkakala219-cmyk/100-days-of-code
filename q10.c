#include <stdio.h>
int main() 
{
int hours,minute,sec;
scanf("%d", &sec);
hours = sec / 3600;
sec = sec%3600;
minute = sec/60;
sec = sec% 60;
printf("%d:%d:%d", hours, minute, sec);
return 0;
}
