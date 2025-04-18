#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int harga_ayam_goreng = 17000;
    const int harga_ayam_bakar = 21000;
    const double diskon_persentase = 0.10;
    const int batas_diskon = 45000;

    int jumlah_goreng, jumlah_bakar;
    double total_harga, total_diskon = 0, total_bayar;

    cout << "Masukkan jumlah ayam goreng: ";
    cin >> jumlah_goreng;
    cout << "Masukkan jumlah ayam bakar: ";
    cin >> jumlah_bakar;

    total_harga = (jumlah_goreng * harga_ayam_goreng) + (jumlah_bakar * harga_ayam_bakar);

    if (total_harga > batas_diskon) {
        total_diskon = total_harga * diskon_persentase;
    }

    total_bayar = total_harga - total_diskon;

    cout << "\n===== STRUK PEMBAYARAN =====\n";
    cout << "Ayam Goreng  : " << jumlah_goreng << " x Rp" << harga_ayam_goreng << " = Rp" << jumlah_goreng * harga_ayam_goreng << endl;
    cout << "Ayam Bakar   : " << jumlah_bakar << " x Rp" << harga_ayam_bakar << " = Rp" << jumlah_bakar * harga_ayam_bakar << endl;
    cout << "----------------------------------\n";
    cout << "Total Harga  : Rp" << total_harga << endl;
    cout << "Diskon (10%) : Rp" << total_diskon << endl;
    cout << "Total Bayar  : Rp" << total_bayar << endl;
    cout << "==================================\n";

    return 0;
}

