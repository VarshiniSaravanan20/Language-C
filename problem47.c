#include<stdio.h>
int main(){
	int i=1,n,a,count1=0,count2=0;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&a);
		if(a==1){
			count1++;
		}
		else if(a==0){
			count2++;
		} 
		i++;
		    
	}
	printf("Successful: %d",count1);
	printf("Cancelled: %d",count2);
	 if(count1>=count2){
	 	printf("Status: Safe");
	 }
	 else{
	 	printf("Status: Risk");
	 }
	 
	 return 0;
}
