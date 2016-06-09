#include<stdio.h>
int main()
 {
 	int a,r1=0,r;
 	scanf("%d",&a);
 	while(a!=0)
 	 {
 	 	r=a%10;
 	 	r1=r1*10+r;
 	 	a=a/10;
 	 }
 	 printf("%d",r1);
 }
