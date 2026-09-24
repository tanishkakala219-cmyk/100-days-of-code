#include<stdio.h>
int main()
{
float cp,sp,percent;
printf("enter cp and sp");
scanf("%f %f",&cp,&sp);
if(sp>cp)
{
percent=((sp-cp)/cp)*100;
printf("Profit %f",percent);
}
else if(cp>sp)
{
percent=((cp-sp)/cp)*100;
printf("Loss %f",percent);
}
else
{
printf("No Profit No Loss");
}
return 0;
}
