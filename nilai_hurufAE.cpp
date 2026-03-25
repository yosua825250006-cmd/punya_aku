#include <stdio.h>

int main() {
    int nilai;
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if(nilai >= 85) printf("Nilai huruf: A\n");
    else if(nilai >= 70) printf("Nilai huruf: B\n");
    else if(nilai >= 55) printf("Nilai huruf: C\n");
    else if(nilai >= 40) printf("Nilai huruf: D\n");
    else printf("Nilai huruf: E\n");

    return 0;
}