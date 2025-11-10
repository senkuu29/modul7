#include <stdio.h>

void analisisPenjualan(int penjualan[], int n) {
    double total = 0;

    for (int i = 0; i < n; i++) {
        total += penjualan[i];
    }

    double rataRata = total / n;
    printf("\n");
    printf("Rata-rata penjualan: %.2f\n", rataRata); 

    int jumlahDiAtasRata = 0;
    printf("Penjualan di atas rata-rata: ");
    for (int i = 0; i < n; i++) {
        if (penjualan[i] > rataRata) {
            printf("%d ", penjualan[i]); 
            jumlahDiAtasRata++;
        }
    }
    printf("\n");

    printf("Jumlah buku di atas rata-rata: %d\n", jumlahDiAtasRata); 
}

int main() {
    int n;

    printf("Masukkan jumlah jenis buku: ");
    scanf("%d", &n);

    int dataPenjualan[n];

    for (int i = 0; i < n; i++) {
        printf("Masukkan penjualan buku ke-%d: ", i + 1);
        scanf("%d", &dataPenjualan[i]); 
    }

    analisisPenjualan(dataPenjualan, n);

    return 0;
}