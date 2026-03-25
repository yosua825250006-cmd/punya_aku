#include <stdio.h>

int main() {
    int jam, menit, detik, total;
    printf("Masukkan jam menit detik (misal 1 30 45): ");
    scanf("%d %d %d", &jam, &menit, &detik);

    total = jam*3600 + menit*60 + detik;
    printf("Total detik: %d\n", total);
    return 0;
}