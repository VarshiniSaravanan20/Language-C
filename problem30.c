#include<stdio.h>
int main(){
	int n,i,expense;
	int total=0,overspend=0;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		scanf("%d",&expense);
		
		total=total+expense;
		
		if(expense>1000){
			overspend++;
		}
	}
	printf("Total Expense: %d\n",total);
	printf("Overspend Days: %d",overspend);
	
	return 0;
	
	
}
