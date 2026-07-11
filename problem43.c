#include<stdio.h>
int main(){
	int totaldata,usage,days=0,n,i=1;
	scanf("%d %d",&totaldata,&n);
	while(i<=days){
	       scanf("%d",&usage);
	       totaldata=totaldata-usage;
	       days++;
	       if(totaldata<=0){
	       	if(totaldata<0){
	       		totaldata=0;
		       }
		       break;
	       }	
	       i++;
	   	
	}
	 printf("Days Data Lasted: %d\n", days);
          printf("Remaining Data: %d",totaldata);
          
          return 0;
}
