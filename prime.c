#include<stdio.h>
int main()
 {
 	int num,flag=0,i;
 	scanf("%d",&num);
 	for(i=2;i<num/2;++i)
 	  {
 	  	if(num%i==0){
 	  		flag=1;
 	  		break;
 	  	}
 	  }
 	  	if(flag==0)
 	  	  printf("the givem number is prime");
 	    else
 	       printf("the given number is not a prime");
 	  return 0;
 	  }
