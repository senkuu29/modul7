#include <stdio.h>

struct Transaksi {
    char namaPelanggan[50];
    char namaBarang[50];
    int harga;
    int jumlah;
};

int main() {
    int jumlahPelanggan = 3;
    struct Transaksi data[jumlahPelanggan]; 
    long long totalPemasukan = 0;

    printf("=== Masukkan Data Penjualan Hari Ini ===\n");
    for (int i = 0; i < jumlahPelanggan; i++) {
        printf("\n--- Pelanggan %d ---\n", i + 1);
        printf("Nama : ");
        scanf("%s", data[i].namaPelanggan);
        printf("Barang: ");
        scanf("%s", data[i].namaBarang);
        printf("Harga: ");
        scanf("%d", &data[i].harga);
        printf("Jumlah: ");
        scanf("%d", &data[i].jumlah);
    }

    printf("\n\n=== Laporan Penjualan Hari Ini ===\n"); 
    printf("%-10s %-10s %-10s %-10s %-10s\n", "Nama", "Barang", "Harga", "Jumlah", "Total");

    for (int i = 0; i < jumlahPelanggan; i++) {
        long long totalPerPelanggan = (long long)data[i].harga * data[i].jumlah;

        totalPemasukan += totalPerPelanggan;

        printf("%-10s %-10s Rp%-9d %-10d Rp%-9lld\n",
               data[i].namaPelanggan,
               data[i].namaBarang,
               data[i].harga,
               data[i].jumlah,
               totalPerPelanggan);
    }

    printf("\nTotal Pemasukan Hari Ini: Rp%lld\n", totalPemasukan);

    return 0;
}