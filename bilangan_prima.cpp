#include <stdio.h>

int main() {
    int n, i, prima = 1;
    printf("Masukkan angka: ");
    scanf("%d", &n);

    if(n <= 1) prima = 0;
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            prima = 0;
            break;
        }
    }

    if(prima) printf("%d adalah bilangan prima\n", n);
    else printf("%d bukan bilangan prima\n", n);

    return 0;
}