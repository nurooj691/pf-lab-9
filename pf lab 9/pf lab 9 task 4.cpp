#include<stdio.h>
#include<string.h>
#define arraysize 5
#define namesize 100
int main(){
	char array[arraysize][namesize]={"kelly", "laura", "alok", "eve", "adam"};
	char name[namesize];
	printf("enter a name to search:\n");
	fgets(name, sizeof(name), stdin);
	 name[strcspn(name, "\n")] = 0; 
	int found=0;
	for(int i=0; i<5; i++){
		if(strcmp(array[i], name)==0){
		found =1;
		break;
	}
	}
	if(found){
		printf("found");
	}
	else
	printf("not found");
}