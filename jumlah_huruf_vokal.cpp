#include <stdio.h>
#include <string.h>

int main() {
    char kata[100];
    int i, count = 0;
    printf("Masukkan kata: ");
    scanf("%s", kata);

    for(i = 0; i < strlen(kata); i++) {
        if(kata[i]=='a'||kata[i]=='i'||kata[i]=='u'||kata[i]=='e'||kata[i]=='o'||
           kata[i]=='A'||kata[i]=='I'||kata[i]=='U'||kata[i]=='E'||kata[i]=='O') {
            count++;
        }
    }
    printf("Jumlah huruf vokal: %d\n", count);
    return 0;
}