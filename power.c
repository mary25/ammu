#include<stdio.h>
int main()
  {
  	int a,b,i=1,s=1;
  	scanf("%d%d",&a,&b);
  	while(i<=b)
  	 {
  	 	s=s*a;
  	 	i++;
  	 }
  	 printf("the power of the number is=%d",s);
  	 return 0;
  }
