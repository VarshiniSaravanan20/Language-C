#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char ch[100];
	int i;
	printf("Password");
	scanf("%99s",&ch);
	for(i=0;i<strlen(ch);i++)
	{
		if(isupper(ch[i])){
			printf("Valid");
			return 0;
		}
	}
	printf("Invalid");
	return 0;
}
