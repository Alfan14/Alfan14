#include<iostream>
using namespace std;
int main(){
float diskon,total,semua,jumlah;
int n,i;

int harga;
int a;
	cout<<"Masukkan banyak data :";
	cin>>n;
i=0;
total=0;
	do{
		cout<<"Masukkan nama ";
		cin>>a;
		cin.ignore
		i++;
		cout<<"Masukkan harga :";
		cin>>harga;
     	i++;
		cout<<"Masukkan jumlah :"<<i+1;
		cin>>jumlah;
		i++;
		total=harga*jumlah;
		cout<<"Masukkan diskon :"<<i+1;
		cin>>diskon;
		i++;
		diskon=diskon/100;
		semua=harga*jumlah*diskon;
	}while(i<=n)
	cout<<"Total semua";
}
