#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long double a,b,c,d,area,luas,hasil;
	
	cout <<"Masukkan nilai alas dan tinggi dari segitiga :";
	cin>>a >>b;
	area=a*b/2;
	
	cout<<"Masukkan nilai panjang dan lebar dari persegi panjang :";
	cin>>c>>d;
	luas=c*d;
	
	cout<<"Luas yang diarsir adalah ="<<hasil<<endl;
    hasil=area-luas;

    float e,f,g,h,area1,luas1,hasil1,radius;
    cout<<"Masukkan nilai panjang dan lebar dari persegi panjang :";
	cin>>e>>f;
	luas1=e*f;
    
    cout<<"Masukkan nilai radian dari lingkaran :";
    cin>>radius;
    area1=3.14159*radius*radius;
    
    cout<<"Luas yang diarsir adalah =\n"<<hasil1;
    hasil1=luas1-area1;
    return 0;
}
