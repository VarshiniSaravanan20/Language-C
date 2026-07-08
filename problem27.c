#include<stdio.h>
int main(){
	int m,n,i;
	int sum = 0;
	printf("Two integers M and N:");
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i=i+m){
		sum=sum+i;
	}
	printf("%d",sum);
}
