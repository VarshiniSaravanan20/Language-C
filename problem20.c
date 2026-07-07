#include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("Integer N:");
	scanf("%d",&n);
	for(i=2;i<=n;i+2){
	  sum=sum+i;
	}
	
	printf("%d",sum);
	
	return 0;
}
