#include<stdio.h>
int main()
 {
 	int num,r1=0,r,b;
 	scanf("%d",&num);
 	b=num;
 	while(num!=0)
      {
      	r=num%10;
      	r1=r1+r*r*r;
      	num=num/10;
      }
      if(b==r1)
      	printf("the given number is an armstrong number %d",b);
      else
        printf("the given number not an armstrong number %d",b);
     
  return 0;
 }
