#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string nama[10];
    int jenis[10], jumlah=0;
    float berat[10], total[10];
    char lanjut;

    do{
        cout<<"\n=== INPUT DATA LAUNDRY ===\n";
        cout<<"Nama Pelanggan   : "; cin>>nama[jumlah];
        cout<<"Jenis (1.Reg / 2.Exp): "; cin>>jenis[jumlah];
        cout<<"Berat (kg)       : "; cin>>berat[jumlah];

        if(jenis[jumlah]==1) total[jumlah]=berat[jumlah]*5000;
        else total[jumlah]=berat[jumlah]*8000;

        jumlah++;
        cout<<"Tambah data lagi? (y/n): ";
        cin>>lanjut;
    }while(lanjut=='y'||lanjut=='Y');

    cout<<"\n=== DAFTAR TRANSAKSI LAUNDRY ===\n";
    cout<<left<<setw(15)<<"Nama"
        <<setw(12)<<"Layanan"
        <<setw(8)<<"Berat"
        <<"Total\n";

    for(int i=0;i<jumlah;i++){
        cout<<left<<setw(15)<<nama[i]
            <<setw(12)<<(jenis[i]==1?"Reguler":"Express")
            <<setw(8)<<berat[i]
            <<"Rp "<<total[i]<<endl;
    }

    return 0;
}