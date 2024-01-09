#include<iostream>
using namespace std;

int main(){
	double r,c,d,luas,area,hasil;
	
	cout<<"Masukkan jari jari lingkaran :";
	cin>>r;
	area=1/2*22/7*r*r;
	
	cout<<"Masukkan Alas dan Tinggi dari jajar genjang";
	cin>>c>>d;
	luas=c*d;
	
	cout<<"Luas Jajar genjang adalah :"<<hasil;
	hasil=area-luas;
}
