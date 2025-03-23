#ifndef STACK_H
#define STACK_H

#include "List.h"  // Stack diimplementasikan menggunakan linked list

// Struktur Stack
typedef struct {
    LinkedList list;  // Stack menggunakan linked list
} Stack;

// Deklarasi fungsi-fungsi untuk mengelola stack
void initializeStack(Stack *s);  // Inisialisasi stack
void push(Stack *s, int value);  // Menambahkan elemen ke stack
int pop(Stack *s);               // Menghapus elemen dari stack
bool isStackEmpty(Stack *s);     // Mengecek apakah stack kosong

#endif