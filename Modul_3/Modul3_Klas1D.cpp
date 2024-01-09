#include<iostream>
using namespace std;

int main(){
	char rek[12],nama[12],alamat[35],jk[10];
	long dana,cicilan1,cicilan2,hasil,jmlh;
	//input
	cout<<"Masukkan nomer rekeningmu :";
	cin.getline(rek,12);
	cout<<"Masukkan nama nasabah :";
	cin.getline(nama,12);
	cout<<"Masukkan alamat nasabah :";
	cin.getline(alamat,35);
	cout<<"Masukkan jenis kredit :";
	cin.getline(jk,10);
	cout<<"Masukkan Dana :";
	cin>>dana;
	cout<<"Masukkan cicilan pertama :";
	cin>>cicilan1;
	cout<<"Masukkan cicilan kedua :";
	cin>>cicilan2;
	//perhitungan
	jmlh=cicilan1+cicilan2;
	hasil=dana-jmlh;
    system("CLS");
	
	//output
	cout<<"***************************"<<endl;
	cout<<"Penerimaan Anggaran Nasabah"<<endl;
	cout<<"***************************"<<endl;
	cout<<"No.Rek :"<<rek<<endl;
	cout<<"Nama Nasabah :"<<nama<<endl;
	cout<<"Alamat Nasabah :"<<alamat<<endl;
	cout<<"Jenis Kredit:"<<jk<<endl;
	cout<<"Dana :Rp"<<dana<<endl;
	cout<<"Cicilan pertama:Rp"<<cicilan1<<endl;
	cout<<"Cicilan kedua :Rp"<<cicilan2<<endl;
	cout<<"Tunggakan :Rp"<<hasil<<endl;
	cout<<"****************************"<<endl;
}
