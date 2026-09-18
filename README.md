# Tugas Pemrograman Dasar TLS 2026

Nama: Fynn Axel Wibowo  
Kelompok: Mariposite

Repository ini berisi jawaban untuk dua soal Pemrograman Dasar TLS 2026. Penjelasan logika, pseudocode, flowchart, serta contoh perhitungan disediakan pada berkas PDF di fase 1 (`Fase_1.pdf`), sedangkan program C++ disimpan dalam file terpisah untuk fase 2 (`problem1.cpp` dan `problem2.cpp`). Kedua program dibuat menggunakan pustaka `<iostream>` dengan fitur dasar C++ seperti array, perulangan, percabangan, serta fungsi buatan sendiri untuk proses manipulasi data, perhitungan panjang string, dan konversi huruf.

## Isi Repository

| File | Isi |
| --- | --- |
| `Fase_1.pdf` | Pseudocode, flowchart, penjelasan logika, dan contoh perhitungan. |
| `problem1.cpp` | Menampilkan urutan eliminasi dan astronot yang tersisa. |
| `problem2.cpp` | Melakukan enkripsi dan dekripsi pesan. |

## Problem 1: The Last Astronaut

Pada soal pertama (The Last Astronaut), program menerima masukan jumlah astronot `N` dan nilai awal `K`, kemudian mensimulasikan proses eliminasi berulang yang dimulai dari astronot nomor 1. Setiap kali astronot dieliminasi, nilai `K` diperbarui secara dinamis: jika nomor astronot yang keluar adalah bilangan genap, maka nilai `K` bertambah 2, sedangkan jika ganjil, `K` berkurang 1 (dengan batas minimum `K` adalah 2). Program menggunakan array berkapasitas 1000 astronot untuk menyimpan urutan pemain yang didukung pada rentang input `1 <= N <= 1000` dan `2 <= K <= 1000000000`, serta menggunakan tipe data `long long` agar nilai `K` tidak melampaui batas kapasitas integer saat terjadi penambahan nilai. Jika dimasukkan `N = 5` dan `K = 2`, program menghasilkan urutan eliminasi `2 1 5 4` dan menyisakan astronot nomor `3` sebagai pemenang. Jika nilai `N = 1`, program langsung menampilkan bahwa tidak ada proses eliminasi yang terjadi.

## Problem 2: Alien-In-The-Middle

Pada soal kedua (Alien-In-The-Middle), program meminta masukan sebuah pesan berbasis teks (1 hingga 1000 huruf A-Z tanpa spasi) diikuti oleh pilihan mode `1` untuk enkripsi atau `2` untuk dekripsi. Huruf pertama dari pesan akan selalu dipertahankan tanpa perubahan. Pada proses enkripsi, perubahan tiap huruf berikutnya dihitung berdasarkan nilai pergeseran dari huruf asli sebelum karakter tersebut. Sementara itu, pada proses dekripsi, pergeseran dihitung menggunakan nilai dari huruf asli yang telah berhasil didekripsi pada langkah sebelumnya. Jika dimasukkan pesan `ALIENS` dengan pilihan `1` (enkripsi), maka hasil keluaran berupa sandi `AMUNSG`. Sebaliknya, jika dimasukkan pesan `AMUNSG` dengan pilihan `2` (dekripsi), program akan mengembalikan teks asli yaitu `ALIENS`. Konversi huruf kecil ke huruf besar dan validasi karakter non-huruf diproses secara manual di dalam program.
