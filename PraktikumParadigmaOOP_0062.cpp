#include <iostream>
using namespace std;

class Barang {
    public:
        string nama;
        int jumlah;
        string kategori;
        string tanggalProduksi;
        void tampilkanSpesifikasi() {
            cout << "================================" << endl;
            cout << "Data Spesifikasi Barang"         << endl;
            cout << "================================" << endl;
            cout << "Nama            : " << nama            << endl;
            cout << "Jumlah          : " << jumlah          << endl;
            cout << "Kategori        : " << kategori        << endl;
            cout << "Tanggal Produksi: " << tanggalProduksi << endl;
            cout << "================================" << endl;
        }
};

int main() {
    Barang elektronik;
    elektronik.nama             = "Laptop ASUS";
    elektronik.jumlah           = 50;
    elektronik.kategori         = "Elektronik";
    elektronik.tanggalProduksi  = "15-01-2024";
    elektronik.tampilkanSpesifikasi();

    cout << endl;

    Barang nonElektronik;
    nonElektronik.nama            = "Meja Kayu";
    nonElektronik.jumlah          = 30;
    nonElektronik.kategori        = "Non-Elektronik";
    nonElektronik.tanggalProduksi = "20-03-2023";
    nonElektronik.tampilkanSpesifikasi();

    return 0;
}