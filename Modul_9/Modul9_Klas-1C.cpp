#include<iostream>
using namespace std;
int main(){
	int banyakdata,angka,total,i;
	float rata;
	total=0;
	i=1;
	cout<<"Masukkan banyak data yang diinputkan :";
	cin>>banyakdata;
	do
	{
		cout<<"Masukkan angka :";
		cin>>angka;
		total=total+angka;
		i++;
	}while(i<=banyakdata);
	rata=total/banyakdata;
	cout<<"Jumlah :"<<total;
	cout<<"Rata-ratanya :"<<rata;
	
}

