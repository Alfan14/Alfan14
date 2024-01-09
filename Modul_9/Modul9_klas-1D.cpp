#include<iostream>
using namespace std;
int main(){
	char a[50];
	int n;
	int i;
	i=0;
	cout<<"Masukkan banyak data :";
	cin>>n;
	do{
		cout<<"Barang ke "<<i+1;cout<<" = ";
		cin.getline(a,50);
		cin.ignore();
		i++;
	}while(i<n);
	cout<<"anda sudah memasukkan semua barang";
}
