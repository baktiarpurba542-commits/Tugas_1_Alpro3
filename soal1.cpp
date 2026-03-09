// Soal ini dijawab menggunakan bahasa C, tapi tidak apa-apa jika menggunakan extension CPP

/* 
Buat program yang meminta pengguna memasukkan sebuah kata (terdiri dari minimal 10 karakter), 
lalu tampilkan karakter per karakter menggunakan putchar().
*/
#include <stdio.h>
#include <string.h> 

int main() {
    char kata[50]; 
    int i, panjang;

    printf("Masukkan sebuah kata: ");
    scanf("%s", kata); 

    // Memakai strlen() agar program tahu kapan harus berhenti mencetak karakter
    panjang = strlen(kata); 

    if (panjang < 10) {
        printf("Terlalu pendek!\n");
    } else {
        /* Memakai for-loop agar kita bisa mengakses setiap indeks array 
           dari posisi 0 hingga posisi terakhir (panjang - 1) */
        for (i = 0; i < panjang; i++) {
            /* Memakai putchar() karena fungsi ini jauh lebih ringan daripada printf()
               jika tujuannya hanya mencetak satu karakter tunggal */
            putchar(kata[i]); 
            putchar('\n'); 
        }
    }

    return 0;
}
