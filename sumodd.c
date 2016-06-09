#include <stdio.h>
int main(void) {
	int a,i,sum=0,sum1=0;
	scanf("%d",&a);
	for(i=1;i<=15;i++)
	 {
	 	sum=sum+i;
	 }
	  printf("sum of the numbers=%d\n",sum);
	  sum=0;
	  for(i=15;i<45;i++)
	   {
	   	if(i%2!=0)
	    {
	     sum1=sum1+i; 	
	   }
	   }
	   printf("odd number sum1=%d\n",sum1);
	   sum1=0;
	return 0;
}
