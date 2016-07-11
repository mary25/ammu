#include <stdio.h>

int main(void) {
	char str[10],i;
	gets(str);
	int len=strlen(str);
	for(i=0;i<len;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	for(i=len;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	return 0;
}
