#include <stdio.h>

int main()
{
char n;
printf("Enter an alphabet\n\n");
scanf("%c",&n);
if('a'<=n && n<='z')
{
	printf("%c \n",n-32);
}
else
{
	printf("%c \n",n+32);
}
return 0;
}
