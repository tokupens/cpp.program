#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int totalHarga = 0;
    int jumlahBarang, hargaBarang;

    // Meminta input dari pengguna
    cout << "===== PROGRAM KASIR INDOMARET =====" << endl;
    cout << "Masukkan jumlah barang yang dibeli: ";
    cin >> jumlahBarang;

    // Memproses input barang
    for (int i = 0; i < jumlahBarang; i++) {
        cout << "Masukkan harga barang ke-" << i + 1 << ": ";
        cin >> hargaBarang;
        totalHarga += hargaBarang;
    }

    // Menampilkan total harga
    cout << "Total harga pembelian: " << totalHarga << endl;

    // Meminta input pembayaran
    int pembayaran;
    cout << "Masukkan jumlah pembayaran: ";
    cin >> pembayaran;

    // Menghitung kembalian
    int kembalian = pembayaran - totalHarga;

    // Menampilkan struk pembayaran
    cout << "===== STRUK PEMBAYARAN =====" << endl;
    cout << "Total harga pembelian: " << totalHarga << endl;
    cout << "Jumlah pembayaran: " << pembayaran << endl;
    cout << "Kembalian: " << kembalian << endl;

    return 0;
}
