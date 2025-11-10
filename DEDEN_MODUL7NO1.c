#include <stdio.h>


void cekGanjilGenap(int angka) {
    if (angka % 2 == 0) {
        printf("Genap\n");
    } else {
        printf("Ganjil\n");
    }
}

int main() {
    int angka;
 
    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &angka);

    printf("Angka %d adalah: ", angka);
    cekGanjilGenap(angka);
    
    return 0;
}