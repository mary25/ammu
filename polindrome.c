#include <stdio.h>

int main(void) {
	int a,r,r1=0,b;
	scanf("%d",&a);
	b=a;
	while(a!=0)
	  {
	  	r=a%10;
	  	r1=r1*10+r;
	  	a=a/10;
	  }
	  if(b==r1)
	    printf("the given number is polindrome");
	  else
	    printf("the given number is not a polindrome");
	return 0;
}
