#include<stdio.h>
int main(){
	int i,n,a,total=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		total=total+a;
	}
	printf("total collection %d",total);
	
	return 0;
}
