#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int angka, tebakan;
    srand(time(0));
    angka = rand() % 100 + 1; // angka 1-100

    printf("Tebak angka antara 1-100!\n");
    do {
        printf("Masukkan tebakan: ");
        scanf("%d", &tebakan);

        if(tebakan > angka) printf("Terlalu besar!\n");
        else if(tebakan < angka) printf("Terlalu kecil!\n");
        else printf("Selamat, benar!\n");
    } while(tebakan != angka);

    return 0;
}