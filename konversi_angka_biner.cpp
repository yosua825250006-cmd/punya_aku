#include <stdio.h>

int main() {
    int n;
    printf("Masukkan angka desimal: ");
    scanf("%d", &n);

    printf("Bentuk biner: ");
    for(int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
    return 0;
}