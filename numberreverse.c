#include <stdio.h>
int main(void) 
{
	int i,a,rem,rev;
	scanf("%d",&a);
	while(a!=0)
	{
	 rem=a%10;
	 rev=rev*10+rem;
	 a=a/10;
	}
	printf("%d",rev);
	return 0;
}
