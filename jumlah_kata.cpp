#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[200];
    int count = 0;
    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    for(int i = 0; i < strlen(kalimat); i++) {
        if(kalimat[i] == ' ' || kalimat[i] == '\n') {
            count++;
        }
    }
    printf("Jumlah kata: %d\n", count);
    return 0;
}