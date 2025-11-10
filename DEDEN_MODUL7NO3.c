#include <stdio.h>
#include <stdio.h>

void hitungKelipatanLima(int n) {
    int count = 0;
    
    for(int i = 1; i <= n; i++) {
        if(i % 5 == 0) {
            printf("%d ", i);
            count++;
        }
    }
    
    printf("\nJumlah kelipatan 5: %d\n", count);
}

int main() {
    int n;
    
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    
    hitungKelipatanLima(n);
    
    return 0;
}