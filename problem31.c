#include<stdio.h>
int main(){
	int n,i,amount;
	int total=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	  total=total+amount;
	  
	  if(total>1000){
	  	printf("Limit Exceeded");
	  }	
	  else{
	  	printf("Approved");
	  }
	}
	return 0;
}
