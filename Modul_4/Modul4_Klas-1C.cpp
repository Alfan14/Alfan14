#include<iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main(){
	char nama[1000][20];
	char nim[1000][20];
	float total,jumlah;
	float nilai1,nilai2,nilai3,nilai4,nilai5;
	int n;
	string grade;
	cout<<"Input:\n\n";
    cout<<"Masukan banyak data yang ingin diinput = ";
    cin>>n;
    cout<<endl<<endl;
	//input
	for (int i=0;i<n;i++){
	cout<<"Masukkan Nama:";
	cin>>nama[i];
	cout<<"Masukkan NIM :";
	cin>>nim[i];
	cout<<"Masukkan nilai 1:";
	cin>>nilai1;
	cout<<"Masukkan nilai 2:";
	cin>>nilai2;
	cout<<"Masukkan nilai 3:";
	cin>>nilai3;
	cout<<"Masukkan nilai 4:";
	cin>>nilai4;
	cout<<"Masukkan nilai 5:";
	cin>>nilai5;
}
	//perhitungan
	total=nilai1+nilai2+nilai3+nilai4+nilai5/5;
	jumlah=nilai1+nilai2+nilai3+nilai4+nilai5;
	//progam 1
	if(total>=90){
		grade='A';
	}
	else if (total>=85){
	    grade='AB';
		 }
	else if (total>=76){
	     grade='B';
		 }
	else if (total>=68){
	    grade='BC';
		 }
	else if (total>=55){
	    grade='C';
		 }
	else if (total>=45){
	    grade='D';
		 }
	else if (total>=0&&total<=44){
	    grade='E';
		 }
    //output
cout<<"Output:\n\n";
cout<<"========================================================================================================================================\n";
cout<<"|  No  |           Nama         |       Nim       | Nilai1 | Nilai2 | Nilai3 | Nilai4 | Jumlah | Nilai Huruf|Total nilai|Rata-rata nilai\n";
cout<<"========================================================================================================================================\n";
	for(int i=0;i<n;i++){
  cout<<"| "<<setiosflags(ios::left)<<setw(5)<<i+1<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(25)<<nama[i]<<"|";
  cout<<"   "<<setiosflags(ios::left)<<setw(8)<<nim[i]<<"    |";
  cout<<"  "<<setiosflags(ios::left)<<setw(0)<<nilai1<<"  |";
  cout<<" "<<setiosflags(ios::left)<<setw(4)<<nilai2<<"     |";
  cout<<" "<<setiosflags(ios::left)<<setw(5)<<nilai3<<"      |";
  cout<<" "<<setiosflags(ios::left)<<setw(5)<<nilai4<<"      |";
  cout<<" "<<setiosflags(ios::left)<<setw(5)<<nilai5<<"      |";
  cout<<" "<<setiosflags(ios::left)<<setw(5)<<jumlah<<"      |";
  cout<<" "<<setiosflags(ios::left)<<setw(6)<<grade<<"|";
    cout<<" "<<setiosflags(ios::left)<<setw(6)<<total<<"|";
  cout<<"\n=====================================================================================================================================\n";
 }
cout<<"Rata-rata nilai ="<<total<<endl;
}
