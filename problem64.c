#include<stdio.h>
int main()
{
	char email[100];
	int i;
	scanf("%99s",email);
	for(i=0;email[i] !='@';i++)
	{
		printf("%c",email[i]);
	}
	
	return 0;
}
