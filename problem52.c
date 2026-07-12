#include<stdio.h>
int main(){
	int weeks,hours,i=1,count=0,risk;
	scanf("%d",&weeks);
	while(i<=weeks){
		scanf("%d",&hours);
		if(hours==0){
			count++;
		}
		i++;
	}
	printf("Inactive Weeks:%d\n",count);
	
	risk=weeks\2;
	if(count>=risk){
		printf("Risk status:High");
	}
	else{
		printf("Risk Status:Low");
	}
	
	return 0;
}
