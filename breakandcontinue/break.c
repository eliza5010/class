#include <stdio.h>
int main()
{
int i,num, sum=0;
for(i=1; i<=5; ++i)
{
printf("inter a number");
scanf("%d", &num);
if(num<0)
{
break;
}
sum+=num;
}
printf("%d", sum);
return 0;
}
