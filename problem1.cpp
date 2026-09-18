#include <iostream>
using namespace std;

int main() {
    int n;
    long long k;
    int astronot[1000];

    // Input & validasi N
    cout << "Masukkan N (1-1000): ";
    if (!(cin >> n) || n < 1 || n > 1000) {
        cout << "N harus berupa bilangan bulat dari 1 sampai 1000.\n";
        return 0;
    }

    // Input & validasi K
    cout << "Masukkan K (2-1000000000): ";
    if (!(cin >> k) || k < 2 || k > 1000000000) {
        cout << "K harus berupa bilangan bulat dari 2 sampai 1000000000.\n";
        return 0;
    }

    // Isi array 1..N
    for (int i = 0; i < n; i++) {
        astronot[i] = i + 1;
    }

    int sisa = n;
    int posisi = 0;
    cout << "Urutan eliminasi: ";

    if (n == 1) {
        cout << "Tidak ada";
    }

    // Loop eliminasi
    while (sisa > 1) {
        // Hitung posisi eliminasi
        posisi = (posisi + k - 1) % sisa;
        int keluar = astronot[posisi];
        cout << keluar;

        if (sisa > 2) {
            cout << " ";
        }

        // Hapus elemen dengan geser array
        for (int i = posisi; i < sisa - 1; i++) {
            astronot[i] = astronot[i + 1];
        }
        sisa--;

        // Update nilai K (genap: +2, ganjil: -1)
        if (keluar % 2 == 0) {
            k = k + 2;
        } else {
            k = k - 1;
        }

        // Batas minimal K = 2
        if (k < 2) {
            k = 2;
        }

        // Reset indeks jika di akhir array
        if (posisi == sisa) {
            posisi = 0;
        }
    }

    // Cetak pemenang
    cout << "\nAstronot terakhir: " << astronot[0] << "\n";
    return 0;
}
