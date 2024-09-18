#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Inisialisasi stack dengan kapasitas dinamis
void initStack(Stack *s, int capacity) {
    s->data = (int*)malloc(capacity * sizeof(int)); // Alokasi memori untuk stack
    s->top = -1;
    s->capacity = capacity;
}

// Mengecek apakah stack penuh
bool isFull(Stack *s) {
    return s->top == s->capacity - 1;
}

// Mengecek apakah stack kosong
bool isEmpty(Stack *s) {
    return s->top == -1;
}

// Menambahkan elemen ke dalam stack
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack penuh! Tidak bisa menambahkan elemen %d\n", value);
    } else {
        s->data[++(s->top)] = value;
    }
}

// Menghapus elemen dari stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack kosong! Tidak ada elemen untuk dihapus\n");
        return -1;
    } else {
        return s->data[(s->top)--];
    }
}

// Melihat elemen teratas tanpa menghapusnya
int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack kosong! Tidak ada elemen untuk dilihat\n");
        return -1;
    } else {
        return s->data[s->top];
    }
}

// Membersihkan memori stack
void freeStack(Stack *s) {
    free(s->data); // Bebaskan memori yang dialokasikan untuk stack
    s->top = -1;
    s->capacity = 0;
}
