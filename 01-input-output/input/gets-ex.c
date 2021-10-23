#include <stdio.h>

int main () {
   char name[50], web_address[50];

   printf("Nama: ");
   gets(name);
   
   printf("Alamat web: ");
   gets(web_address);

   printf("You entered: %s\n", name);
   printf("Web address: %s\n", web_address);

   return(0);
}

// "warning: the `gets' function is dangerous and should not be used."
// Ini bukan error, melainkan hanya peringatan saja agar tidak menggunakan fungsi gets(). Mengapa? Karena dapat menyebabkan masalah buffer overflow pada program. Solusinya dapat menggunakan `fgets()`