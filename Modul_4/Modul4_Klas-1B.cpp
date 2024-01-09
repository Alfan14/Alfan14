#include<iostream>
using namespace std;
int main(){
	 char nama[20];
	 char nim[20];
	 char kelas[10];
	 int nilai,total,jumlah;
	 int sks1,sks2,sks3,sks4;
	 int nilai1,nilai2,nilai3,nilai4;
	 char mtk1[40];
	 char mtk2[40];
	 char mtk3[40];
	 char mtk4[40];
	 //keterangan
	 cout<<"====================================================================="<<endl;
	 cout<<"Jangan gunakan spasi untuk memasukkan nama kuliah pakai'_,-,digabung'"<<endl;
	 cout<<"====================================================================="<<endl;
	//input karakter 
	 cout<<"Masukkan nama:";
	 cin>>nama;
	 cout<<"Masukkan nim:";
	 cin>>nim;
	 cout<<"Masukkan kelas:";
	 cin>>kelas;
	//input nilai 
	 cout<<"Masukkan nilai1:";
	 cin>>nilai1;
	 cout<<"Masukkan sks1:";
	 cin>>sks1;
	 cout<<"Masukkan Mata kuliah:";
	 cin>>mtk1;
	 cout<<"Masukkan nilai2:";
	 cin>>nilai2;
	 cout<<"Masukkan sks2:";
	 cin>>sks2;
	  cout<<"Masukkan Mata kuliah:";
	 cin>>mtk2;
	 cout<<"Masukkan nilai3:";
	 cin>>nilai3;
	 cout<<"Masukkan sks3:";
	 cin>>sks3;
	  cout<<"Masukkan Mata kuliah:";
	 cin>>mtk3;
	 cout<<"Masukkan nilai4";
	 cin>>nilai4;
	 cout<<"Masukkan sks4:";
	 cin>>sks4;
	 cout<<"Masukkan Mata kuliah:";
	 cin>>mtk4;
	 //output
	 cout<<"============================"<<endl;
	 cout<<"Nilai Angka :"<<nilai1<<endl;
	 cout<<"Nilai Angka :"<<nilai2<<endl;
	 cout<<"Nilai Angka :"<<nilai3<<endl;
	 cout<<"Nilai Angka :"<<nilai4<<endl;
	 cout<<"Mata kuliah :"<<mtk1<<endl;
	 cout<<"Mata kuliah :"<<mtk2<<endl;
	 cout<<"Mata kuliah :"<<mtk3<<endl;
	 cout<<"Mata kuliah :"<<mtk4<<endl;
	 cout<<"Sks :"<<sks1<<endl;
	 cout<<"Sks :"<<sks2<<endl;
	 cout<<"Sks :"<<sks3<<endl;
	 cout<<"Sks :"<<sks4<<endl;
	 cout<<"============================"<<endl;
	
	 //nilai1
	 if(nilai1>=95){
	 	cout<<"Angka huruf=A"<<endl;
	 }else if(nilai1>=70){
	    cout<<"Angka huruf=B"<<endl;
	 }
	 else if(nilai1>=50){
	    cout<<"Angka huruf=C"<<endl;
	 }
	 else if(nilai1>=40){
	    cout<<"Angka huruf=D"<<endl;
	 }
	 else if(nilai1>=0){
	    cout<<"Angka huruf=E"<<endl;
	 }else{
	 	cout<<"Diluar angka seratus";
	 }
	 //nilai2
	 if(nilai2>=95){
	 	cout<<"Angka huruf=A"<<endl;
	 }else if(nilai2>=70){
	    cout<<"Angka huruf=B"<<endl;
	 }
	 else if(nilai2>=50){
	    cout<<"Angka huruf=C"<<endl;
	 }
	 else if(nilai2>=40){
	    cout<<"Angka huruf=D"<<endl;
	 }
	 else if(nilai2>=0){
	    cout<<"Angka huruf=E"<<endl;
	 }else{
	 	cout<<"Diluar angka seratus";
	 }
	 //nilai3
	 if(nilai3>=95){
	 	cout<<"Angka huruf=A"<<endl;
	 }else if(nilai4>=70){
	    cout<<"Angka huruf=B"<<endl;
	 }
	 else if(nilai3>=50){
	    cout<<"Angka huruf=C"<<endl;
	 }
	 else if(nilai3>=40){
	    cout<<"Angka huruf=D"<<endl;
	 }
	 else if(nilai3>=0){
	    cout<<"Angka huruf=E"<<endl;
	 }else{
	 	cout<<"Diluar angka seratus";
	 }
	 //nilai4
	 if(nilai4>=95){
	 	cout<<"Angka huruf=A"<<endl;
	 }else if(nilai4>=70){
	    cout<<"Angka huruf=B"<<endl;
	 }
	 else if(nilai4>=50){
	    cout<<"Angka huruf=C"<<endl;
	 }
	 else if(nilai4>=40){
	    cout<<"Angka huruf=D"<<endl;
	 }
	 else if(nilai4>=0){
	    cout<<"Angka huruf=E"<<endl;
	 }else{
	 	cout<<"Diluar angka seratus";
	 }
	 //perhitungan
	total=sks1+sks2+sks3+sks4;
	cout<<"Total SKS :"<<total<<endl;
}
