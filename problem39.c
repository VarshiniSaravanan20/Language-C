#include<stdio>
int main(){
	int i,n,a,total=0,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		total=total+a;
		if(n>100){
			count++;
		}
	}
	printf("Total Patients: %d\n",total);
	printf("Overcroweded Days: %d",count);
}
