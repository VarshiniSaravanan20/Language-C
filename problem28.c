#include<stdio.h>
int main(){
	int n,digit;
	int count=0;
	printf("Integer N:");
	scanf("%d",&n);
	for(;n>0;n=n/10){
		digit =n%10;
		if(digit%2==0){
			count++;
		}
		
	}
	printf("%d",count);
}
