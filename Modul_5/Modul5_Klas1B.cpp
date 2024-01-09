#include<iostream>

using namespace std;
int main(){
	int pilih,harga,jumlah,Barang;
	    cout<<"KOPMA UNIPMA\n";
		
		cout<<"Pilih barang dibawah ini :\n";
		cout<<" 1. :Buku tulis-------------------------Rp 8.000\n";
		cout<<" 2. :Pensil-----------------------------Rp 2.000\n";
		cout<<" 3. :Penghapus 2------------------------Rp 6.000\n";
		cout<<" 4. :Spidol-----------------------------Rp 3.000\n";
		cout<<" 5. :Penggaris--------------------------Rp 1.000\n";
		
		cout<<"Pilih barang yang dibeli(1-5)";
		cin>>pilih;
	switch(pilih){	
		case 1:{
	    cout<<"Barang yang dibeli:Buku tulis"<<endl;
	    cout<<"Harga satuan :Rp 8000";
	    
		break;}
        case 2:{
		cout<<"Barang yang dibeli:Pensil"<<endl;
	    cout<<"Harga satuan :Rp 2000";
		break;
		}
	    case 3:{
	    cout<<"Barang yang dibeli:Penghapus 2"<<endl;
	    cout<<"Harga satuan :Rp 6000";
		break;
		}
	    case 4:{
		cout<<"Barang yang dibeli:Spidol"<<endl;
	    cout<<"Harga satuan :Rp 3000";
		break;
		}
	    case 5:{
	    cout<<"Barang yang dibeli:Penggaris"<<endl;
	    cout<<"Harga satuan :Rp 1000";
		break;
	    }default:
		cout<<"Diluar daftar menu";
}
}
