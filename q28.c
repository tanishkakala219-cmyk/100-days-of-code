#include<stdio.h>
int main()
{
int n,i,pro=1;
scanf("%d",&n);
for(i=2;i<=n;i+=2)
pro*=i;
printf("%d",pro);
return 0;
}
