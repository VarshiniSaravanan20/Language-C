#include<stdio.h>
int main(){
	int i,salary,absentdays,final;
	int total;
	printf("salary\nabsentdays");
	scanf("%d %d",&salary,&absentdays);
	for(i=0;i<=absentdays;i++){
		total=absentdays*100;
		final=salary-total;
	}
	printf("%d",&final);
	
	return 0;
}
