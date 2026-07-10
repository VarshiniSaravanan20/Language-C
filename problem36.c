#include<stdio.h>
int main(){
	int n,i,a,total=0,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		total=total+a;
		if(a>50){
			count++;
		}
	}
	printf("Total Rainfall: %d\n",total);
	printf("Heavy Rain Days: %d",count);
}
