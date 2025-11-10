#include <stdio.h>


int totalBelanja(int harga, int jumlah) {
    int hasilAwal = harga * jumlah;
    int hasilAkhir = hasilAwal;

    if (hasilAwal > 500000)
    {
      int diskon = hasilAwal * 0.10;
      hasilAkhir = hasilAwal - diskon;
    }
    
    return hasilAkhir;
}


int main() {
    int hargaBarang;
    int jumlahBarang;

    printf("Masukkan harga barang: ");
    scanf("%d",&hargaBarang);
    printf("Masukkan jumlah barang: ");
    scanf("%d",&jumlahBarang);

    int totalBayar = totalBelanja(hargaBarang, jumlahBarang);
    printf("Total ynag harus di bayar: Rp%d", totalBayar);
    
    return 0;
}