#include "header.h"

void Sisip_Depan(simpul &L, string Nama) {
    simpul baru= new Mahasiswa;
    baru->Nama= Nama;
    for (int i=0; i<14; ++i) baru->Kehadiran[i]= 0;
    baru->Next= L;
    L= baru;
}

void Tambah_Kehadiran(simpul &L, string Nama, int Pertemuan) 
{
    simpul bantu= L;
    while (bantu!= NULL && bantu->Nama!= Nama)
        bantu= bantu->Next;
    if (bantu!= NULL && Pertemuan>=1 && Pertemuan<=14)
    {
    	if (bantu->Kehadiran[Pertemuan-1] == 0)
    	{
    		bantu->Kehadiran[Pertemuan-1] = 1;
		}
		else
		{
			cout<<"Mahasiswa/Mahasiswi atas nama "<<Nama<<" sudah tercatat hadir pada pertemuan "<<Pertemuan<<".\n";
		}
	}
}

void Cetak(simpul L) {
    simpul bantu= L;
    while (bantu!= NULL) 
	{
        cout<<">> Nama                            : "<<bantu->Nama<<"\n>> Kehadiran                       : ";
        for (int i=0; i<14; ++i)
            cout<<bantu->Kehadiran[i]<< " ";
        cout<<endl;
        bantu= bantu->Next;
    }
}
