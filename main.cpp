#include "header.h"

int main() 
{
    simpul L= NULL;
    string Nama;
    int choose, Pertemuan;

    do 
	{
        cout<<"\n------------------------------------\n"
            <<" OPERASI PADA LINKED LIST MAHASISWA \n"
            <<"------------------------------------\n"
            <<"   [1] Tambah Mahasiswa. \n"
            <<"   [2] Tambah Kehadiran Mahasiswa. \n"
            <<"   [3] Cetak Seluruh Data. \n"
            <<"   [0] Keluar. \n"
            <<"------------------------------------\n"
            <<">> Masukkan Pilihan                : ";cin>>choose;
        switch (choose) {
            case 1:
                cout<<">> Masukkan Nama Mahasiswa         : ";            
                cin>>Nama;
                Sisip_Depan(L, Nama);
                break;
            case 2:
                cout<<">> Masukkan Nama Mahasiswa         : ";
                cin>>Nama;
                cout<<">> Masukkan Nomor Pertemuan (1-14) : ";
                cin>>Pertemuan;
                Tambah_Kehadiran(L, Nama, Pertemuan);
                break;
            case 3:
                Cetak(L);
                break;
            case 0:
                cout<<"Keluar Dari Program.\n";
                break;
            default:
                cout<<"Pilihan Tidak Valid. Silakan Coba Lagi.\n";
        }
    } while (choose != 0);
    return 0;
}
