#include <iostream>
using namespace std;
int main(){
	
	char kode[10],barang[35];
	long long hasil1,harga,jumlah,bayar,kembali;
	//inputan
	cout<<"Masukkan kode barang :";
	cin.getline(kode,10);
	cout<<"Masukkan Nama Barang :";
	cin.getline(barang,35);
    cout<<"Jumlah barang :";
	cin>>jumlah;
    cout<<"Harga satuan :";
    cin>>harga;
    //perhitungan
    hasil1=jumlah*harga;
    kembali=bayar-hasil1;
	//output
	cout<<"****************************************"<<endl;
	cout<<"Nota Penjualan Komputer"<<endl;
	cout<<"****************************************"<<endl;
	cout<<"Total harga :"<<hasil1<<endl;
	cout<<"Berikan uangmu :";
	cin>>bayar;
	cout<<"Bayar :"<<bayar<<endl;
	cout<<"Kembali :"<<kembali<<endl;
	return 0;
}
