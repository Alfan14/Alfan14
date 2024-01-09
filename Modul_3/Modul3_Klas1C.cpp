#include <iostream>
using namespace std;

int main(){
	float barang,diskon,potongan,total;
	//input1
	cout<<"------------------------"<<endl;
	cout<<"Masukkan harga barang =";
	cin>>barang;
	cout<<"Masukkan diskon =";
	cin>>diskon;
	cout<<"-------------------------"<<endl;
	//perhitungan
	potongan=(diskon/100)*barang;
	total=barang-potongan;
	//output
	cout<<"--------------------------"<<endl;
	cout<<"Harga Barang ="<<barang<<endl;
	cout<<"Besar Diskon ="<<potongan<<endl;
	cout<<"--------------------------"<<endl;
	cout<<"Harga Bersih ="<<total<<endl;
	cout<<"--------------------------"<<endl;
	
}
