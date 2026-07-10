#include<stdio.h>
int main(){
	int i,a,n,total=0,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		total=total+a;
		if(a>100){
			count++;
		}
	}
	printf("Total Loss: %d\n ",total);
	printf("High Loss Days: %d",count);
	
	return 0;
}
