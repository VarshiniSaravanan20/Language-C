#include<stdio.h>
int main(){
	int i=1,n,b,a,count=0;
	scanf("%d",&n);
	scanf("%d",&b);
	while(i<=n){
	     scanf("%d",&a);
	     b=b+a;
	     if(b<2000)
	     {
	     	count++;
		     }
		     i++;	
	}
	printf("Final Balance: %d\n",b);
	printf("Low Balance Days: %d",count);
	
	return 0;
}
