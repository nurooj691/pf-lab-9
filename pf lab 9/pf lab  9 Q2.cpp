#include<stdio.h>
int main(){
	int bolts, nuts, washers;
	printf("enter the number of nuts:\n");
	scanf("%d", &nuts);
	printf("enter the number of bolts:\n");
		scanf("%d", &bolts);
	printf("enter the number of washers:\n");
		scanf("%d", &washers);
		if(nuts>=bolts){
			if(washers>=2*bolts)
		   printf("order is ok.");
		}
	if(nuts<bolts){
		printf("incorrect oder: too few nuts\n");
	}
	if(washers<2*bolts){
		printf("incorrect order: too few washers.");
	}
	
	
}
