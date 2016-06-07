#include<stdio.h>
int main()
  {
  	char i;
 	scanf("%c",&i);
    if((i>='a'&&i<='z')||(i>='A'&&i<='Z'))
    printf("the given character is alphabet");
    else
    printf("the given character is not a alphabet");
    return 0;
  }
