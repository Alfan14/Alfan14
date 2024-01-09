#include <iostream>

using namespace std;

int main(){
	char nama[35],alamat[25];
	int nota,harga,barang;
	int total,jumlah;
	double diskon;
	int hasil;
	//input
	cout<<"Masukkan jumlah nota :";
	cin>>nota;
	cout<<"Masukkan Nama Nasabah :";
	cin>>nama;
	cout<<"Masukkan Alamat Nasabah :";
	cin>>alamat;
	cout<<"Masukkan jumlah barang :";
	cin>>barang;
	cout<<"Masukkan harga barang :";
	cin>>harga;
	total=barang*harga;
	cout<<"Total :"<<total<<endl;
	cout<<"Masukkan diskon (%) :";
	cin>>diskon;
	//perhitungan
	hasil=diskon/100* total;
	jumlah=total-hasil;
		
	//output
	cout<<"****************************"<<endl;
	cout<<"Penerimaan Angsuran Nasabah"<<endl;
	cout<<"****************************"<<endl;
	cout<<"Nota :"<<nota<<endl;
	cout<<"Nama nasabah :"<<nama<<endl;
	cout<<"Alamat nasabah :"<<alamat<<endl;
	cout<<"Jumlah barang :"<<barang<<endl;
	cout<<"Harga :"<<harga<<endl;
	cout<<"Diskon :"<<diskon<<endl;
	cout<<"Total diskon:"<<hasil<<endl; 
	cout<<"Total bayar:"<<jumlah<<endl;
}
