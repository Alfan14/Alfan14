#include<iostream>
using namespace std;

int main(){
	int c,d,r;
	float hasil;
    float luasA,luasB;
    
	
	cout<<"Masukkan jari jari lingkaran A:";
	cin>>r;
	luasA = 3.14*(r*r);
	cout<<"Masukkan jari jari lingkaran B:";
	cin>>r;
	luasB = 3.14*(r*r);
	
	hasil=luasA-luasB;
	cout<<"Luas Lingkaran adalah :"<<hasil;
	;
	
	return 0;
}


