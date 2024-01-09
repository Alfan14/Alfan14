#include <iostream> 
#include <math.h>
using namespace std;

int main(){
	int a,b,c,d;
	long long luas,area,hasil;
	
	cout<<"Masukkan nilai alas dan tinggi dari segitiga :";
	cin>>a>>b;
	area=(a*b)/2;
	 
	cout<<"Masukkan nilai panjang dan lebar :";
	cin>>c>>d;
	luas=2*(c+d);
	
	cout<<"Luas yang diarsir adalah="<<hasil<<endl;
	hasil=area-luas;	
}
