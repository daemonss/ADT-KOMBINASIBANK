ADT Teller Bank: Kombinasi Single Linked List, Stack, dan Queue

Deskripsi kasus:

Buat Program menjalankan menu, kombinasi SLL, Stack & Queue secara realtime.
Improvisasi alur sangat dibutuhkan berdasarkan kreasi!

Kasus ini merupakan implementasi Abstract Data Type (ADT) yang menggabungkan tiga struktur data utama: **Single Linked List**, **Stack**, dan **Queue**. Kasus yang diangkat adalah simulasi layanan teller bank, di mana pelanggan mengantri untuk mendapatkan layanan seperti deposit, penarikan, pembukaan akun baru, atau konsultasi keuangan.

Alasan Memilih Kasus Teller Bank

Kasus teller bank dipilih karena:
1. **Antrian Pelanggan**: Menggunakan Queue untuk mengelola antrian pelanggan yang menunggu untuk dilayani.
2. **Riwayat Layanan Terakhir**: Menggunakan Stack untuk menyimpan riwayat layanan terakhir yang diberikan kepada pelanggan.
3. **Riwayat Layanan Lengkap**: Menggunakan Single Linked List untuk menyimpan semua riwayat layanan yang pernah diberikan.

Dengan menggabungkan ketiga struktur data ini, kita dapat memodelkan sistem antrian dan riwayat layanan bank dengan lebih efisien.

Struktur Data dan Tugasnya:

### 1. Single Linked List
- File: List.h, List.c
- **Tugas**: 
  - Menyimpan semua riwayat layanan yang pernah diberikan kepada pelanggan.
  - Memungkinkan penambahan data baru di akhir list (`insertLast`) dan penghapusan data lama dari awal list (`deleteFirst`).
  - Digunakan untuk menampilkan semua riwayat layanan yang pernah dilakukan.

### 2. Queue
- File: queue.h, queue.c
- **Tugas**:
  - Mengelola antrian pelanggan yang menunggu untuk dilayani.
  - Mengimplementasikan operasi `EnQueue` untuk menambahkan pelanggan ke antrian dan `DeQueue` untuk melayani pelanggan yang berada di depan antrian.
  - Digunakan untuk menampilkan antrian pelanggan yang sedang menunggu.

### 3. Stack
- File: stack.h, stack.c
- **Tugas**:
  - Menyimpan riwayat layanan terakhir yang diberikan kepada pelanggan.
  - Mengimplementasikan operasi `push` untuk menambahkan layanan terakhir dan `pop` untuk mengambil layanan terakhir.
  - Digunakan untuk menampilkan riwayat layanan terakhir yang diberikan.

Cara Menggunakan Program:

1. **Daftar Pelanggan Baru**: Pelanggan baru akan dimasukkan ke dalam antrian (Queue) dengan ID unik.
2. **Layani Pelanggan**: Pelanggan yang berada di depan antrian akan dilayani, dan riwayat layanannya akan disimpan di Stack (riwayat terakhir) dan Linked List (riwayat lengkap).
3. **Tampilkan Antrian**: Menampilkan semua pelanggan yang sedang menunggu dalam antrian.
4. **Tampilkan Riwayat Terakhir**: Menampilkan layanan terakhir yang diberikan kepada pelanggan.
5. **Tampilkan Semua Riwayat**: Menampilkan semua riwayat layanan yang pernah diberikan.
6. **Hapus Riwayat Lama**: Menghapus riwayat layanan lama dari Linked List.

Contoh Penggunaan:

1. Pelanggan mendaftar dan masuk ke antrian.
2. Teller melayani pelanggan, dan riwayat layanan disimpan di Stack dan Linked List.
3. Teller dapat melihat antrian pelanggan yang menunggu, riwayat layanan terakhir, dan semua riwayat layanan yang pernah diberikan.
4. Riwayat layanan lama dapat dihapus untuk menghemat memori.
