#include <stdio.h>

int main () {
    char name[20], web_address[30];

    printf("Nama: ");
    scanf("%s", &name);

    printf("Alamat web: ");
    scanf("%s", &web_address);

    printf("\n------------------------------\n");
    printf("Nama yang diinputkan: %s\n", name);
    printf("Alamat Web yang diinputkan: %s\n", web_address);
   
    return 0;
}

/*
Untuk mengatasi masalah spasi pada inputan, kita bisa ubah format text dapat diubah menggunakan `[^\n]s` pada `scanf()` dan akan menerima spasi:

printf("Nama: ");
scanf("%[^\n]s", name);
*/