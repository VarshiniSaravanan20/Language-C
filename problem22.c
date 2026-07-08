#include<stdio.h>
int main(){
	int n,temp,count = 0;
	printf("Integer N:");
	scanf("%d",&n);
	for(temp=n;temp>0;temp=temp/10){
		count++;
	}
	printf("%d",count);
	
	return 0;
}
