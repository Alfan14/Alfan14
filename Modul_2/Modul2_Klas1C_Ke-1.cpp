#include<iostream>
using namespace std;

int main(){
	int a,b,c,d,area,luas,hasil;
	cout<<"Masukkan Alas dan Tinggi dari Segitiga";
	cin>>a>>b;
	area=1/2*a*b;
	
	cout<<"Masukkan Sisi 1 dan Sisi 2 dari Persegi";
	cin>>c>>d;
	luas=c*d;
	
	cout<<"Luas Persegi adalah :";
	hasil=area-luas;
}
