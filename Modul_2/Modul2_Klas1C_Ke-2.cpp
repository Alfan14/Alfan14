#include<iostream>
using namespace std;

int main(){
	int r,c,d,area,luas,hasil;
	cout<<"Masukkan jari jari dari lingkaran";
	cin>>r;
	area=1/2*22/7*r*r;
	
	cout<<"Masukkan Panjang dan Lebar dari persegi panjang";
	cin>>c>>d;
	luas=2*(c+d);
	
	cout<<"Luas Persegi Panjang adalah :"<<hasil;
	hasil=area-luas;
}
