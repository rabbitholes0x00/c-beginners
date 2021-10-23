# Syntax and Code Structure in C
```c
#include <stdio.h>

int main(){
	printf("Hello World!");
	return 0;
}
```

## #1 `header file` #include <stdio.h>
`#include` berfungsi untuk mengimpor fungsi-fungsi yang sudah didefinisikan pada [header file]. [header file] adalah file yang berisi definisi fungsi yang sudah dibuat, tujuan [header file] agar dapat digunakan pada program C yang lainnya dan file ini berekstensi `.h` file `stdio.h` berisi deklarasi fungsi dasar yang dibutuhkan untuk standar input output pada C seperti `printf()`.

## #2 `function` main() & int main() & void main()
* `main()` atau main function adalah fungsi utama dalam program dan dieksekusi pertama kali saat program dijalankan. 
* `int` di depan `main()` adalah tipe data yang mengembalikan nilai. didalam fungsi `main()` wajib kita sertakan `return 0`. fungsi `main()` akan mengembalikan nilai `0` setelah selesai dieksekusi. 
* `void()` tidak ada (kosong). Jika kita menggunakan `void`, maka kita tidak perlu menuliskan keyword `return` di akhir fungsi. Karena fungsi `void` tidak akan mengembalikan nilai apapun.

```c
int main(){
	statement;
	return 0;
}

void main(){
	statement;
}
```

## #3 `statement` printf();
Setiap statement didalam program C wajib diakhiri dengan titik koma `;` kalau tidak maka program akan error.

```c
printf("Hello World!"); // berfungsi untuk mencetak text Hello World! ke console.
```

## #4 `return value` return 0;
`return 0` artinya fungsi main akan mengembalikan nilai `0` setelah selesai dieksekusi.

## #5 block code
Block Code adalah kumpulan `statement` dan `expression` dibungkus dengan kurung kurawal { ... }.

```c
if (expression){
	statement;
}

for (initialization; expression; post;){
	statement;
}
```