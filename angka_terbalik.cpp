#include <stdio.h>

int main() {
    int n, rev = 0;
    printf("Masukkan angka: ");
    scanf("%d", &n);

    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("Angka terbalik: %d\n", rev);
    return 0;
}