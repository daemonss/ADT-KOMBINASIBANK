#ifndef BANK_SERVICE_H
#define BANK_SERVICE_H

#include "List.h"
#include "queue.h"
#include "stack.h"

// Struktur data untuk pelanggan
typedef struct {
    int id;              // ID pelanggan
    char nama[50];       // Nama pelanggan
    char layanan[20];    // Jenis layanan (Deposit, Withdrawal, dll)
} Pelanggan;

// Deklarasi fungsi-fungsi untuk mengelola layanan pelanggan
void tampilkanMenu();  // Menampilkan menu utama
void daftarPelangganBaru(Queue *antrian, int *idPelanggan);  // Mendaftarkan pelanggan baru
void layaniPelanggan(Queue *antrian, Stack *riwayatTerakhir, LinkedList *riwayatLengkap);  // Melayani pelanggan
void tampilkanAntrian(Queue antrian);  // Menampilkan antrian pelanggan
void tampilkanRiwayatTerakhir(Stack riwayatTerakhir);  // Menampilkan riwayat layanan terakhir
void tampilkanSemuaRiwayat(LinkedList riwayatLengkap);  // Menampilkan semua riwayat layanan
void hapusRiwayatLama(LinkedList *riwayatLengkap);  // Menghapus riwayat layanan lama
void pindahkanKeRiwayatLengkap(Stack *riwayatTerakhir, LinkedList *riwayatLengkap);  // Memindahkan data dari Stack ke Linked List

#endif