#include <stdio.h>

int main(){
	int password, count = 1;
	
	while(count <= 3){
		printf("[sudo] password: ");
		scanf("%d", &password);

		if (password == 8080){
			printf("succes login! password is %d\n", password);
			break;
		} else if (count == 3) {
			printf("3 incorrect password attempts!\n");	
		}	else {
			printf("Sorry, try again.\n");
		}
		count++;
	}
	return 0;
}