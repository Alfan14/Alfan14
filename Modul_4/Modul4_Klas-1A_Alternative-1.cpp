#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std ;
int main(){
	char c[1000][30],b[1000][35],grade;
	int a,n;
	cout<<"Input:\n\n";
    cout<<"Masukan banyak data yang ingin diinput = ";
    cin>>n;
    cout<<endl<<endl;
    //input
	for (int i=0;i<n;i++){
	cout<<"Data ke-"<<i+1<<endl;
	cout<<"Masukkan nama mahasiswa :";
	cin>>b[i];
	cout<<"Masukkan Mata kuliah :";
	cin>>c[i];
	cout<<"Masukkan nilai ujianmu :";
	cin>>a;
}
	//progam menampilkan huruf
	if(a>=85){
		grade='A';
	}
	else if (a>=70){
	    grade='B';
		 }
	else if (a>=69){
	     grade='C';
		 }
	else if (a>=49){
	    grade='D';
		 }
	else if (a>=0&&a<=39){
	    grade='E';
		 }
    else{
		cout<<"Diluar area angka seratus";
     	}
    //output
	cout<<"Output:\n\n";
cout<<"=============================================================================\n";
cout<<"|  No  |           Nama           | Mata Kuliah | Nilai Angka |Nilai Huruf |\n";
cout<<"=============================================================================\n";
 for(int i=0;i<n;i++){
  cout<<"| "<<setiosflags(ios::left)<<setw(5)<<i+1<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(25)<<b[i]<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(18)<<c[i]<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(26)<<a<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(28)<<grade<<"|";
  cout<<"\n=========================================================================\n";
 }
 }