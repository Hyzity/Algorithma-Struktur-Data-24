#include <stdio.h>
#include <string.h>
#include "stack.h"

int main() {
    char str[100];
    printf("Masukkan string yang ingin dibalik: ");
    scanf("%s", str);

    int length = strlen(str);

    Stack s;
    initStack(&s, length); // Inisialisasi stack sesuai panjang string

    // Push setiap karakter ke dalam stack
    for (int i = 0; i < length; i++) {
        push(&s, str[i]);
    }

    printf("String yang dibalik: ");
    // Pop karakter dari stack dan cetak dalam urutan terbalik
    while (!isEmpty(&s)) {
        printf("%c", pop(&s));
    }
    printf("\n");

    freeStack(&s); // Bersihkan memori setelah selesai
    return 0;
}
