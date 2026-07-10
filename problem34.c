#include<stdio.h>
int main(){
	int batterypercent,a,n,i;
	int total=0;
	scanf("%d",&batterypercent);
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		total=total+a;
	}
	printf("Remaining Battery: %d ",batterypercent-total);
}
