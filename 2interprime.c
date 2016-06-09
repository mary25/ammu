#include<stdio.h>
int main()
 {
 	int a,b,i,j,flag=0;
 	scanf("%d%d",&a,&b);
 	printf("prime number between %d and %d\n",a,b);
	for(i=a;i<=b;i++)
 	  {
 	  	 flag=0;
 	  	for(j=2;j<=i/2;++j){
 	    if(i%j==0)
 	       {
 	       	flag=1;
 	       	break;
 	       	
 	      // 	printf("%d ",i);
 	       }
 	    
 	  }
 	       if(flag==0&&i!=1)
 	        printf("%d",i);
 	  }
 	  return 0;
 }
