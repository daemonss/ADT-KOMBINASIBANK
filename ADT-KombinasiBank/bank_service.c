#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bank_service.h"

// Fungsi untuk menampilkan menu utama
void tampilkanMenu() {
    printf("\nMenu:\n");
    printf("1. Daftar Pelanggan Baru\n");
    printf("2. Layani Pelanggan\n");
    printf("3. Tampilkan Antrian\n");
    printf("4. Tampilkan Riwayat Layanan Terakhir\n");
    printf("5. Tampilkan Semua Riwayat Layanan\n");
    printf("6. Hapus Riwayat Layanan Lama\n");
    printf("7. Keluar\n");
    printf("Pilih opsi: ");
}

// Fungsi untuk mendaftarkan pelanggan baru
void daftarPelangganBaru(Queue *antrian, int *idPelanggan) {
    Pelanggan pelanggan;
    printf("Masukkan nama pelanggan: ");
    scanf("%s", pelanggan.nama);
    printf("Pilih layanan (Deposit, Withdrawal, New Account, Financial Consultation): ");
    scanf("%s", pelanggan.layanan);
    pelanggan.id = (*idPelanggan)++;
    EnQueue(antrian, pelanggan.id);  // Tambahkan pelanggan ke antrian
    printf("Pelanggan %s telah ditambahkan ke antrian.\n", pelanggan.nama);
}

// Fungsi untuk melayani pelanggan (menyimpan data di Stack dan Linked List)
void layaniPelanggan(Queue *antrian, Stack *riwayatTerakhir, LinkedList *riwayatLengkap) {
    if (!isEmptyQueue(*antrian)) {
        int id;
        DeQueue(antrian, &id);  // Hapus pelanggan dari antrian
        push(riwayatTerakhir, id);  // Tambahkan ke riwayat layanan terakhir (Stack)
        insertLast(riwayatLengkap, id);  // Tambahkan ke riwayat layanan lengkap (Linked List)
        printf("Pelanggan dengan ID %d sedang dilayani.\n", id);
    } else {
        printf("Tidak ada pelanggan dalam antrian.\n");
    }
}

// Fungsi untuk menampilkan antrian pelanggan
void tampilkanAntrian(Queue antrian) {
    printf("Antrian Pelanggan:\n");
    printList(antrian);  
}

// Fungsi untuk menampilkan riwayat layanan terakhir
void tampilkanRiwayatTerakhir(Stack riwayatTerakhir) {
    printf("Riwayat Layanan Terakhir:\n");
    printList(riwayatTerakhir.list);  // Cetak isi Stack
}

// Fungsi untuk menampilkan semua riwayat layanan
void tampilkanSemuaRiwayat(LinkedList riwayatLengkap) {
    printf("Semua Riwayat Layanan:\n");
    printList(riwayatLengkap);  
}

// Fungsi untuk menghapus riwayat layanan lama
void hapusRiwayatLama(LinkedList *riwayatLengkap) {
    if (isEmpty(*riwayatLengkap)) {
        printf("Riwayat layanan sudah kosong.\n");
    } else {
        deleteFirst(riwayatLengkap);  
        printf("Riwayat layanan lama telah dihapus.\n");
    }
}