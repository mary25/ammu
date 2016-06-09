#include<stdio.h>
#include<math.h>
int main()
 {
 	int n;
 	scanf("%d",&n);
 	printf("factorial of the number is:%d",fact(n));
 	return 0;
}
    fact(int n){
 	if(n<=1)
 	  return 1;
  
       return (n*fact(n-1));
       
    }
    

 
