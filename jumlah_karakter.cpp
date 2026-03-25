#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[200];
    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    printf("Jumlah karakter: %lu\n", strlen(kalimat)-1);
    return 0;
}