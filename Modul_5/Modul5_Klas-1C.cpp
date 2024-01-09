#include<iostream>

using namespace std;
int main(){
	int pilih,harga,jumlah,n;
	int nama_barang,harga_barang;
	    cout<<"KOPMA UNIPMA\n";
		
		cout<<"Pilih barang dibawah ini :\n";
		cout<<" 1. :Buku tulis-------------------------Rp 8.000\n";
		cout<<" 2. :Pensil-----------------------------Rp 2.000\n";
		cout<<" 3. :Penghapus 2------------------------Rp 6.000\n";
		cout<<" 4. :Spidol-----------------------------Rp 3.000\n";
		cout<<" 5. :Penggaris--------------------------Rp 4.000\n";
		cout<<"Masukkan pilihanmu =";
		cin>>pilih;
			
	switch(pilih){	
		case 1:{
		cout<<"Nama barang =Buku tulis"<<endl;
		harga =8000;
		cout<<"Harga barang ="<<harga;
		break;}
		case 2:{
		cout<<"Nama barang =Pensil"<<endl;
		harga =2000;
		cout<<"Harga barang ="<<harga;
		break;}
        case 3:{
		cout<<"Nama barang =Penghapus 2"<<endl;
		harga =6000;
		cout<<"Harga barang ="<<harga;
		break;}
		case 4:{
		cout<<"Nama barang =Spidol"<<endl;
		harga =3000;
		cout<<"Harga barang ="<<harga;
		break;}
		case 5:{
		cout<<"Nama barang =Penggaris"<<endl;
		harga =4000;
		cout<<"Harga barang ="<<harga;
		break;}
		default:
		cout<<"Diluar daftar menu";
		}
}	
