#include<stdio.h>
int main()
 {
 	int a,b,i;
 	scanf("%d%d",&a,&b);
 	printf("even number between %d and %d\n",a,b);
 	for(i=a;i<b;i++)
 	  {
 	    if(i%2==0)
 	       {
 	       	printf("%d ",i);
 	       }
 	  }
 	  return 0;
 }
