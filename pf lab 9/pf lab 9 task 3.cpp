#include<stdio.h>
#include<string.h>
int main(){
	char username[6] = "admin";
	int password = 1234;
	printf("enter the username:\n");
	char str[50];
	scanf("%s", &str);
	int result = strcmp(username, str);
	int pass;
	printf("enter the password:\n");
	scanf("%d", &pass);
	if(result==0){
		if(pass==password)
		printf("access granted!\n");
	}
	else
	printf("access denied.");
	
}