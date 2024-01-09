#include <iostream>
#include<math.h>
using namespace std;

int main(){
	long long a,b,r,area,luas,hasil;
	cout<<"Masukkan nilai panjang dan lebar dari persegi panjang :";
	cin>>a>>b;
	area=2*(a+b);
	
	cout<<"Masukkan nilai jari-jari :";
	cin>>r;
	luas =22*r*r/7.;
	
	cout<<"Luas lingkaran adalah :"<<hasil;
	hasil=area-luas;
}
