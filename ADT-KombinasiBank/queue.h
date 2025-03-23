#ifndef QUEUE_H
#define QUEUE_H

#include "List.h"
#include "boolean.h"

typedef LinkedList Queue;  // Queue diimplementasikan menggunakan linked list

// Deklarasi fungsi-fungsi untuk mengelola queue
void CreateQueue(Queue *Q);              // Membuat queue kosong
boolean isEmptyQueue(Queue Q);           // Mengecek apakah queue kosong
boolean isFull(Queue Q);                 // Mengecek apakah queue penuh (selalu false untuk linked list)
void EnQueue(Queue *Q, int X);           // Menambahkan elemen ke queue
void DeQueue(Queue *Q, int *X);          // Menghapus elemen dari queue
int PanjangQueue(Queue Q);               // Menghitung panjang queue

#endif