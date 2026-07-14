#include<stdio.h>
#include<string.h>
int main(){
	char ch[50];
	printf("Enter the username");
	scanf("%49s",&ch);
	printf("Lenght =%zu",strlen(ch));
	return 0;
}
