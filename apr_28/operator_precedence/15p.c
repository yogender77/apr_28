#include<stdio.h>
int main()
{
int x=7;
x=(x<<=x%2);//7<<1;
printf("%d\n",x);
return 0;
}
