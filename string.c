#include <stdio.h>
#include<string.h>
int main(void)
{
	int a,b;
	char s[10],rev[10];
	scanf("%s",s);
	b=strlen(s);
	for(a=b;a>=0;a--)
{
	static x=0;
	rev[x]=s[a];
   x++;
	printf("%c",s[a]);
}
	return 0;
}
