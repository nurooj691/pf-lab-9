#include<stdio.h>
int main(){
	int n;
	printf("enter a number:\n");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			printf("%d", j);
		}
		for(int k=i-1; k>=1; k--){
			printf("%d", k);
		}
		printf("\n");
	}
}