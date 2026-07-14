#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	scanf("%99s",ch);
	printf("%s", strrev(ch));
	return 0;
}
