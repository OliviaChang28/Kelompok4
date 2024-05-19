#include <iostream>
#include <string>
using namespace std;

typedef struct Mahasiswa*simpul;
struct Mahasiswa {
    string Nama;
    int Kehadiran[14];
    simpul Next;
};

// Prototype Function
void Sisip_Depan (simpul &L, string Nama);
void Tambah_Kehadiran (simpul &L, string Nama, int Pertemuan);
void Cetak (simpul L);
void Hapus_Depan (simpul &L);
void Hapus_Belakang (simpul &L);
