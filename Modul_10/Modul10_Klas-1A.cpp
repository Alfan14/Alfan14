#include<iostream>
using namespace std;
int main(){
	int pilihan;
	
	cout<<"Kode barang<1..3> :";
	cin>>pilihan;
	
	switch(pilihan){
		case 1:{
			cout<<"nomer barang tidak tersedia dan stok 0";
			break;
		}
		case 2:{
			cout<<"nomer barang tersedia dan stok tersisa 20";
			break;
		}
		case 3:{
			cout<<"nomer barang tersedia dan stok tersisa 30";
			break;
		}
		default :
			cout<<"Angka yang dimasukkan salah";
			
	}
}
