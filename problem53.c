#include<stdio.h>
int main(){
	int i=1,n,hours,total=0,count=0;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&hours);
		total=total+hours;
		i++;
		if(hours>2){
			count++;
		}
	}
	printf("Total Delay: %d\n15",total);
	printf("Delayed Days: %d",count);
	return 0;
}
