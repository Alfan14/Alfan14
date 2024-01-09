#include<iostream>
#include <iomanip>
#include <stdio.h>
 using namespace std;
 int main(){
 	char barang1[1000][40];
 	int harga1,jumlah1;
 	int totals,total1;
 	int n;
 	int i=0;
 	cout<<"Input:\n\n";
    cout<<"Masukan banyak data yang ingin diinput = ";
    cin>>n;
    cout<<endl<<endl;
 	//input
 	for (int i=0;i<n;i++){
 	cout<<"Masukkan nama barang :";
 	cin>>barang1[i];
 	cout<<"Masukkan jumlah barang: ";
 	cin>>jumlah1;
 	cout<<"Masukkan harga satuan:";
 	cin>>harga1;

 	//perhitungan
 	
 	total1=jumlah1*harga1;
 	totals +=total1;
 }
 	//output
  cout<<"Output:\n\n";
  cout<<"TOKO FAMILY"<<endl;
  cout<<"Jl.Kalimantan no.10"<<endl;
  cout<<"Madiun"<<endl;
  cout<<"=============================================================================================\n";
  cout<<"|  No  |           Nama barang        |     Jumlah barang    | Harga satuan  | Jumlah harga |\n";
  cout<<"=============================================================================================\n";
   for(int i=0;i<n;i++){
  cout<<"| "<<setiosflags(ios::left)<<setw(5)<<i+1<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(25)<<barang1[1]<<"|";
  cout<<"   "<<setiosflags(ios::left)<<setw(25)<<jumlah1<<"|";
   cout<<"  "<<setiosflags(ios::left)<<setw(25)<<harga1<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(25)<<total1<<"|";
  cout<<"\n===========================================================================================\n";
 }
 cout<<"----------------------------------------------------------------------------------------------------------------------------"<<endl;
 cout<<"Total Belanja = Rp. "<<totals<<endl;
}
