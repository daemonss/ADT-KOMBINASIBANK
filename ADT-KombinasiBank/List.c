#include "List.h"

// Fungsi untuk membuat linked list kosong
void createList(LinkedList *L) {
    L->head = NULL;  // Set head ke NULL untuk menandakan linked list kosong
}

// Fungsi untuk mengecek apakah linked list kosong
bool isEmpty(LinkedList L) {
    return L.head == NULL;  // Jika head NULL, linked list kosong
}

// Fungsi untuk mengalokasikan memori untuk node baru
Node* allocate(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));  // Alokasi memori untuk node baru
    if (newNode != NULL) {
        newNode->info = value;  // Set nilai node
        newNode->next = NULL;   // Set next ke NULL
    } else {
        printf("ERROR: Alokasi memori gagal, insertion ditolak!\n");
    }
    return newNode;
}

// Fungsi untuk menyisipkan node di awal linked list
void insertFirst(LinkedList *L, int value) {
    Node *newNode = allocate(value);  // Alokasi node baru
    if (newNode != NULL) {
        newNode->next = L->head;  // Node baru menunjuk ke head lama
        L->head = newNode;        // Head sekarang adalah node baru
    }
}

// Fungsi untuk menyisipkan node di akhir linked list
void insertLast(LinkedList *L, int value) {
    Node *newNode = allocate(value);  // Alokasi node baru
    if (newNode != NULL) {
        if (L->head == NULL) {  // Jika linked list kosong, node baru menjadi head
            L->head = newNode;
        } else {
            Node *last = L->head;
            while (last->next != NULL) {  // Cari node terakhir
                last = last->next;
            }
            last->next = newNode;  // Node baru menjadi node terakhir
        }
    }
}

// Fungsi untuk menghapus node pertama
void deleteFirst(LinkedList *L) {
    if (isEmpty(*L)) {
        printf("ERROR: List kosong, deleteFirst ditolak!\n");
        return;
    }
    Node *temp = L->head;  // Simpan head lama
    L->head = L->head->next;  // Head baru adalah node berikutnya
    free(temp);               // Bebaskan memori node lama
}

// Fungsi untuk mencetak isi linked list
void printList(LinkedList L) {
    Node *temp = L.head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->info);  // Cetak nilai node
        temp = temp->next;             // Pindah ke node berikutnya
    }
    printf("NULL\n");
}