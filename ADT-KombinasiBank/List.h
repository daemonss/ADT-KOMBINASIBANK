#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Struktur Node untuk Single Linked List
typedef struct Node {
    int info;           // Data yang disimpan dalam node
    struct Node *next;  // Pointer ke node berikutnya
} Node;

// Struktur LinkedList
typedef struct {
    Node *head;         // Pointer ke head (node pertama) dari linked list
} LinkedList;

// Deklarasi fungsi-fungsi untuk mengelola linked list
void createList(LinkedList *L);              // Membuat linked list kosong
bool isEmpty(LinkedList L);                  // Mengecek apakah linked list kosong
Node* allocate(int value);                   // Mengalokasikan memori untuk node baru
void insertFirst(LinkedList *L, int value);  // Menyisipkan node di awal linked list
void insertLast(LinkedList *L, int value);   // Menyisipkan node di akhir linked list
void deleteFirst(LinkedList *L);             // Menghapus node pertama
void printList(LinkedList L);                // Mencetak isi linked list

#endif