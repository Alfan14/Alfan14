#include<iostream>
using namespace std;
int main(){

cout<< "Bilangan-1= 10"<<endl;

if (10>=0&&10%2==0){
	cout<<10<<"Bilangan genap positif\n";
}
else if (10<=0&&10%2==0) {
	cout<<10<<"Bilangan genap negatif\n";
}
else if(10>=0&&10%2!=0){
	cout<<10<<"Bilangan ganjil positif\n";
}
else if(10<=0&&10%2!=0){
	cout<<10<<"Bilangan ganjil negatif\n";
}
else{
	cout<<"Diluar angka 10";
}

return 0;
}
