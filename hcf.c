#include<stdio.h>
int main()
 {
 	int a,b,temp,gcd,c,d;
 	scanf("%d%d",&c,&d);
 	a=c;
 	b=d;
 	while(b!=0){
 		temp=b;
 		b=a%b;
 		a=temp;
 	}
 	 gcd=a;
 	 printf("HCF=%d",gcd);
 	 return 0;
 	
 }
