#include <stdio.h>
#include <string.h>

int main() {
    char kata[100];
    int i, j, palindrome = 1;
    printf("Masukkan kata: ");
    scanf("%s", kata);

    j = strlen(kata) - 1;
    for(i = 0; i < strlen(kata)/2; i++) {
        if(kata[i] != kata[j-i]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("%s adalah palindrome\n", kata);
    else
        printf("%s bukan palindrome\n", kata);

    return 0;
}