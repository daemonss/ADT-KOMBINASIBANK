#include <stdio.h>
#include "bank_service.h"

int main() {
    Queue antrian;          // Queue untuk antrian pelanggan
    Stack riwayatTerakhir;  // Stack untuk riwayat layanan terakhir
    LinkedList riwayatLengkap;  // Linked list untuk riwayat layanan lengkap
    int idPelanggan = 1;    // ID pelanggan dimulai dari 1
    int pilihan;            // Variabel untuk menyimpan pilihan menu

    // Inisialisasi struktur data
    CreateQueue(&antrian);          // Inisialisasi queue
    initializeStack(&riwayatTerakhir);  // Inisialisasi stack
    createList(&riwayatLengkap);    // Inisialisasi linked list

    // Loop utama program
    while (1) {
        tampilkanMenu();  
        scanf("%d", &pilihan);  

        switch (pilihan) {
            case 1:
                daftarPelangganBaru(&antrian, &idPelanggan);  // Daftar pelanggan baru
                break;
            case 2:
                layaniPelanggan(&antrian, &riwayatTerakhir, &riwayatLengkap);  // Layani pelanggan
                break;
            case 3:
                tampilkanAntrian(antrian);  // Tampilkan antrian
                break;
            case 4:
                tampilkanRiwayatTerakhir(riwayatTerakhir);  // Tampilkan riwayat terakhir
                break;
            case 5:
                tampilkanSemuaRiwayat(riwayatLengkap);  // Tampilkan semua riwayat
                break;
            case 6:
                hapusRiwayatLama(&riwayatLengkap);  // Hapus riwayat lama
                break;
            case 7:
                printf("Keluar dari program.\n");
                return 0;  // Keluar dari program
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    }

    return 0;
}