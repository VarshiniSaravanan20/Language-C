#include<stdio.h>
int main(){
	int i,n,j,factors,count = 0;
	printf("Integer N");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
	     factors = 0;
	     
	     for(j=1;j<=i;j++){
	     	if(i%j == 0)
	     	{
	     		factors++;
		     }
	     }
	     
	     if(factors == 2){
	     	count++;
	     }
	     printf("%d",count);
	     
	     return 0;	
	}
}
