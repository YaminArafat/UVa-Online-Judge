#include <stdio.h>

int main()
{
int T, i,sum;
scanf("%d", &T);

for (i=0; i<=T; i++)
{
char str[3];
scanf("%s", str);
sum=str[0]+str[1]+str[2];

printf("%d\n", sum);
}

return 0;
}
