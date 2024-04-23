#include <iostream>
using namespace std;

class Mahasiswa {
    public: // akses modifier
        string nama;
        int umur ;
        string jurusan;

        void output(){
            cout << "Nama: " << nama << endl;
            cout << "Umur: " << umur << endl;
            cout << "Jurusan: " << jurusan << endl;
        }
};

class Matakuliah {
    private:
        string kodemk;
        string namamk;
        int sks;
    public:
        void input() {
            cout << "Kode MK: ";
            cin >> kodemk;
            cout << "Nama MK: ";
            cin >> namamk;
            cout << "SKS: ";
            cin >> sks;
        }

        void output(){
            cout << "Kode MK: " << kodemk << endl;
            cout << "Nama MK: " << namamk << endl;
            cout << "SKS: " << sks << endl;
        }
};

int main (){
    Mahasiswa mhs;
    Matakuliah mk;

    mhs.nama = "Budi";
    mhs.umur = 20;
    mhs.jurusan = "Teknik Informatika";
    mhs.output();

    mk.input();
    mk.output();

    return 0;
}

#include <iostream>
using namespace std;

class bangunDatar {

    //akses modifier
    private:
        float panjang, lebar;
    public:
        float luas;

        void input() { // methode input persegi panjang

            cout << "Masukkan Panjangnya = ";
            cin >> panjang;
            cout << "Masukkan Lebarnya = ";
            cin >> lebar;
        }

        float hitungLuas (){
            return panjang * lebar;
        }

        void display() {
            cout << "Panjangnya = " << panjang << endl;
            cout << "Lebarnya = " << lebar << endl;
            cout << "Luasnya = " << hitungLuas() << endl;
        }
};

int main () {
    bangunDatar pp; // deklarasi objek pp dari class bangunDatar
    pp.input();
    pp.display();
    
}