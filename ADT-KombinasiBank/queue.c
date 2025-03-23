#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk membuat queue kosong
void CreateQueue(Queue *Q) {
    createList(Q);  // Queue diimplementasikan sebagai linked list
}

// Fungsi untuk mengecek apakah queue kosong
boolean isEmptyQueue(Queue Q) {
    return isEmpty(Q);  // Menggunakan fungsi isEmpty dari linked list
}

// Fungsi untuk mengecek apakah queue penuh (selalu false untuk linked list)
boolean isFull(Queue Q) {
    return false; 
}

// Fungsi untuk menambahkan elemen ke queue (enqueue)
void EnQueue(Queue *Q, int X) {
    insertLast(Q, X); 
}

// Fungsi untuk menghapus elemen dari queue (dequeue)
void DeQueue(Queue *Q, int *X) {
    if (!isEmptyQueue(*Q)) {
        *X = Q->head->info;
        deleteFirst(Q);      
    } else {
        printf("ERROR: Queue kosong, DeQueue ditolak!\n");
    }
}

// Fungsi untuk menghitung panjang queue
int PanjangQueue(Queue Q) {
    int count = 0;
    Node *temp = Q.head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}