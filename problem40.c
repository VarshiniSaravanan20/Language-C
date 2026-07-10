#include<stdio.h>
int main(){
	int i,n,a,total=0,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		total=total+a;
		if(a<210){
			count++;
		}
	}
	printf("Minimum Voltage: %d\n",total);
	printf("Low Voltage Events: %d",count);
	
	return 0;
}
