#include<stdio.h>
int main()
 {
 	int a,b,temp,c,d,gcd,lcm;
 	scanf("%d%d",&c,&d);
 	a=c;
 	b=d;
 	while(b!=0)
 	{
 		temp=b;
 		b=a%b;
 		a=temp;
 	}
 	 gcd=a;
 	 lcm=(c*d)/gcd;
 	 printf("lcm=%d",lcm);
 	 
 	 return 0;
 	 
 }
