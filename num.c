#include <stdio.h>
int main(void) {
	int a;
	scanf("%d",&a);
	if(a==0)
	 printf("the given number is zero");
	else
	 a>0?printf("the given number is positive"):printf("the given number is negative");
	return 0;
}
