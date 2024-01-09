#include<iostream>

using namespace std;
int main(){
	string nama;
	int pilih,harga,jumlah,n;
	int nama_barang,harga_barang;
	cout<<"Masukkan nama anda :";
	cin>>nama;
	    cout<<"Selamat Datang "<<nama<<" Di bengkel yamaha"<<endl;
	    
		cout<<"Macam-macam barang :"<<endl;
		cout<<" 1. :Velg racing \n";
		cout<<" 2. :Spion \n";
		cout<<" 3. :Knalpot 2\n";
		cout<<" 4. :Busi\n";
		cout<<" 5. :Oli\n";
		cout<<"pilih barang yang ingin dibeli <1-5> =";
		cin>>pilih;
			
	switch(pilih){	
		case 1:{
		cout<<"Nama barang =Velg racing"<<endl;
		harga =8000;
		cout<<"Harga barang ="<<harga;
		break;}
		case 2:{
		cout<<"Nama barang =Spion"<<endl;
		harga =2000;
		cout<<"Harga barang ="<<harga;
		break;}
        case 3:{
		cout<<"Nama barang =Knalpot 2"<<endl;
		harga =6000;
		cout<<"Harga barang ="<<harga;
		break;}
		case 4:{
		cout<<"Nama barang =Busi"<<endl;
		harga =35000;
		cout<<"Harga barang ="<<harga;
		break;}
		case 5:{
		cout<<"Nama barang =Oli"<<endl;
		harga =4000;
		cout<<"Harga barang ="<<harga;
		break;}
		default:
		cout<<"Diluar daftar menu";
		}
}	
