#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "stack.h"

// Fungsi untuk menghitung ekspresi postfix
int evaluatePostfix(char* exp, int length) {
    Stack s;
    initStack(&s, length); // Inisialisasi stack dengan ukuran dinamis

    // Iterasi melalui setiap karakter dalam ekspresi
    for (int i = 0; exp[i] != '\0'; i++) {
        // Jika karakter adalah angka, tambahkan ke stack
        if (isdigit(exp[i])) {
            int value = exp[i] - '0'; // Konversi karakter ke integer
            push(&s, value);
        } 
        // Jika karakter adalah operator, pop dua elemen dari stack dan lakukan operasi
        else {
            int val1 = pop(&s);
            int val2 = pop(&s);
            switch (exp[i]) {
                case '+':
                    push(&s, val2 + val1);
                    break;
                case '-':
                    push(&s, val2 - val1);
                    break;
                case '*':
                    push(&s, val2 * val1);
                    break;
                case '/':
                    push(&s, val2 / val1);
                    break;
                default:
                    printf("Operator tidak valid: %c\n", exp[i]);
                    break;
            }
        }
    }

    // Elemen terakhir di stack adalah hasil dari ekspresi postfix
    int result = pop(&s);
    freeStack(&s); // Bebaskan memori setelah penggunaan stack
    return result;
}

int main() {
    char exp[100]; // Ekspresi postfix yang diinput oleh user
    printf("Masukkan ekspresi postfix (tanpa spasi): ");
    scanf("%s", exp);

    int length = 0;
    while (exp[length] != '\0') {
        length++;
    }

    // Evaluasi ekspresi postfix
    int result = evaluatePostfix(exp, length);

    // Output hasil
    printf("Hasil perhitungan: %d\n", result);

    return 0;
}
