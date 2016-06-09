 #include<stdio.h>

void fibonacci(int);

int main(){

    int k,n;
    int i=0,j=1;
   
    scanf("%d",&n);
    printf("Fibonacci Series:\n ");
    printf("%d %d ",i,j);
    fibonacci(n);

    return 0;
}

void fibonacci(int n){

    static long int f=0,s=1,sum;

    if(n>0){
         sum = f + s;
         f = s;
         s= sum;
         printf("%ld ",sum);
         fibonacci(n-1);
    }

}
