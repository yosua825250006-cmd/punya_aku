#include <stdio.h>

int main() {
    int base, exp, hasil = 1;
    printf("Masukkan basis: ");
    scanf("%d", &base);
    printf("Masukkan eksponen: ");
    scanf("%d", &exp);

    for(int i = 0; i < exp; i++) {
        hasil *= base;
    }
    printf("Hasil: %d\n", hasil);
    return 0;
}