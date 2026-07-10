#include<stdio.h>
int main(){
	int n,i,units;
	int total=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&units);
		total=total+units;
		}
		printf("Total Units: %d",total);
		return 0;
	}
