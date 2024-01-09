#include<iostream>
using namespace std;
int main(){
	char nama[50];
	int i;
	int n,harga;
	i=1;
	cout<<"Masukkan jumlah data yang diinputkan : ";
	cin>>n;
	do{
		cout<<"Masukkan nama : ";
		cin.getline(nama[i], sizeof(nama[i]));
		cout<<"Masukkan harga : ";
		cin>>harga[i];
		i++;
	}while(i<n);
}
