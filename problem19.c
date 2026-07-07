#include<stdio.h>
int main(){
	int i,n,sum=1;
	printf("Integer N:");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		sum=sum*i;
	}
	printf("%d",sum);
	return 0;
}
