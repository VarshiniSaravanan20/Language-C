#include<stdio.h>
int main(){
	int n,rev=0,temp,digit;
	printf("Integer N:");
	scanf("%d",&n);
	for(temp=n;temp<0;temp=temp/10){
		digit=temp%10;
		rev=rev*10+digit;
	}
	
	printf("%d",rev);
	
	return 0;
}
