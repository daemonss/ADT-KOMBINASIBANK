#include "stack.h"
#include <stdio.h>

// Fungsi untuk menginisialisasi stack
void initializeStack(Stack *s) {
    createList(&(s->list));  // Inisialisasi linked list untuk stack
}

// Fungsi untuk menambahkan elemen ke stack (push)
void push(Stack *s, int value) {
    insertFirst(&(s->list), value);  // Menambahkan elemen di awal linked list
}

// Fungsi untuk menghapus elemen dari stack (pop)
int pop(Stack *s) {
    if (isStackEmpty(s)) {
        printf("ERROR: Stack kosong, pop ditolak!\n");
        return -1;  
    }
    int value = s->list.head->info;  
    deleteFirst(&(s->list));         
    return value;                    
}

// Fungsi untuk mengecek apakah stack kosong
bool isStackEmpty(Stack *s) {
    return isEmpty(s->list);  // Menggunakan fungsi isEmpty dari linked list
}