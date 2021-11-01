#include <stdio.h>

int main(){
	printf("Masukkan nama Anda: ");
	char name[100];
	fgets(name, 100, stdin);
	printf("Nama Anda adalah %s", name);
}
