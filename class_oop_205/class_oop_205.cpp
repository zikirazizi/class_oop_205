#include <iostream>
using namespace std;

class Mahasiswa {
public:
    int nim;
    string nama;
    void tampil() {
        cout << "NIM= " << nim;
        cout << "\nNama= " << nama;
    }
};

class Matakuliah {
private:
    int sks;
    string kode;
    string namaMK;
public:
    void inputMK() {

        cout << "\nMasukkan jumlah SKS= ";
        cin >> sks;
        cout << "Masukkan Kode MK= ";
        cin >> kode;
        cout << "Masukkan Nama MK= ";
        cin >> namaMK;
    }

    void tampilMK() {
        cout << "\nJumlah sks= " << sks;
        cout << "\nKode MK= " << kode;
        cout << "\nNama MK= " << namaMK << endl;
    }
};

int main() {
    Mahasiswa mhs;
    Matakuliah mk;

    cout << "Nim Mahasiswa= ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa= ";
    cin >> mhs.nama;

    mk.inputMK();
    mhs.tampil();
    mk.tampilMK();

}