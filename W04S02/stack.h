#ifndef STACK_H
#define STACK_H

#include <stdbool.h> // Untuk tipe data bool

// Struktur untuk stack dinamis
typedef struct {
    int *data;   // Pointer untuk menyimpan elemen stack
    int top;     // Posisi elemen teratas
    int capacity; // Kapasitas stack
} Stack;

// Deklarasi fungsi
void initStack(Stack *s, int capacity);
bool isFull(Stack *s);
bool isEmpty(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
int peek(Stack *s);
void freeStack(Stack *s); // Fungsi untuk membersihkan memori stack

#endif
    