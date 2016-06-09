#include<stdio.h>
#include<math.h>
int main()
 {
 	int num,r1=0,r,b,c,a,i,t1,t2,n;
 	scanf("%d%d",&a,&c);

 	for(i=a+1;i<c;++i){
 		t2=i;
 		t1=i;
 	while(t1!=0)
      {
      	t1=t1/10;
      	++n;
      }
      while(t2!=0){
      	r=t2%10;
      	r1=r1+pow(r,n);
      	t2=t2/10;
      }
 	
      if(r1==i){
      	printf(" %d",i);
      } 	
      
       n=0;
       r1=0;
 }
  return 0;
 }
