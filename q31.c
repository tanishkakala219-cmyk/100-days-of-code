#include<stdio.h>
int main()
{
int n,b,i=0;
scanf("%d",&n);
while(n>0){
b=n%2;
n/=2;
i++;
}
for(i=i-1;i>=0;i--)
printf("%d",b);
return 0;
}
