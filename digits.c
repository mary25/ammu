#include <stdio.h>

int main(void) {
	int n,r[10],i,cnt=0;
	scanf("%d",&n);
	while(n!=0)
	  {
	  	 i=0;
	     r[i++]=n%10;
	     n=n/10;
	     cnt++;
	  }
	  printf("%d",cnt);
	return 0;
}
