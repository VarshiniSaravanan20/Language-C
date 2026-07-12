#include<stdio.h>
int main(){
	int i=1,n,power,max=0,count=0;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&power);
		if(power>max){
			max=n;
		}
		if(power>5){
			count++;
		}
		i++;
	}
	printf("Max Usage:%d",max);
	printf("Surge Hours:%d",count);
	return 0;
}
