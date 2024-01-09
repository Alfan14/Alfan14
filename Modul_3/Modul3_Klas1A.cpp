#include <iostream>
using namespace std;
int main(){
	
	char nim[20],nama[35],alamat[36],belajar[50];
	long biaya,cicilan1,cicilan2,tunggakan;
	//inputan
	cout<<"Masukkan Nim :";
	cin.getline(nim,20);
	cout<<"Masukkan Nama Mahasiswa :";
	cin.getline(nama,35);
    cout<<"Masukkan Alamat Mahasiswa :";
	cin.getline(alamat,36);
	cout<<"Belajar:";
	cin.getline(belajar,50);
	cout<<"Masukkan Biaya Belajar :";
	cin>>biaya;
	cout<<"Masukkan Cicilan Pertama :";
	cin>>cicilan1;
	cout<<"Masukkan Cicilan Kedua :";
	cin>>cicilan2;
	cout<<"Masukkan Tunggakan :";
	cin>>tunggakan;
	
	system("CLS");
	
	//output
	cout<<"****************************************"<<endl;
	cout<<"Penerimaan Mahasiswa Baru UNIPMA"<<endl;
	cout<<"****************************************"<<endl;
	cout<<"Nim :"<<nim<<endl;
	cout<<"Nama Mahasiswa :"<<nama<<endl;
	cout<<"Alamat Mahasiswa :"<<alamat<<endl;
	cout<<"Belajar :"<<belajar<<endl;
	cout<<"Biaya Belajar :"<<biaya<<endl;
	cout<<"Cicilan pertama :"<<cicilan1<<endl;
	cout<<"Cicilan kedua :"<<cicilan2<<endl;
	cout<<"Tunggakan :"<<tunggakan<<endl;
	
}
