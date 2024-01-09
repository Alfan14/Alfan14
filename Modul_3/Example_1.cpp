#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

main(){
	double tot_beli,discount=0,jum_bayar=0;
	system("CLS");
	
	cout<<"Total pemeblian Rp.";
	cin>>tot_beli;
	
	if(tot_beli>=50000)
	discount=0.2*tot_beli;
	
	cout<<"Besarnya Discount Rp."<<discount<<endl;
	
	jum_bayar=tot_beli-discount;
	
	cout<<"Jumlah yang harus dibayarkan Rp."<<jum_bayar;
	
	getch();
}
