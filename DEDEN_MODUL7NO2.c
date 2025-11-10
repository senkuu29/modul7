#include <stdio.h>


int hitungPangkat(int bilangan, int pangkat) {
    int hasil = 1;
    
    for (int i = 0; i < pangkat; i++) {
        hasil = hasil * bilangan;
    }
    
    return hasil;
}

int main() {
    int bilangan, pangkat, hasil;
    
    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);
    
    printf("Masukkan pangkat: ");
    scanf("%d", &pangkat);
    
    hasil = hitungPangkat(bilangan, pangkat);
    
    printf("%d pangkat %d adalah %d\n", bilangan, pangkat, hasil);
    
    return 0;
}