#include<stdio.h>
int main(){
	int i,a,n,total=0,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		total=total+a;
		if(a>2){
			count++;
		}
	}
	printf("Total Data: %d\n",total);
	printf("High Usage Days: %d",count);
}
