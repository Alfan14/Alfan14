#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main(){

char kode;
system("CLS");
cout<<"Masukkan kode barang[A..C]";
cin>>kode;

switch(kode)
{
	case 'A':
		cout<<"Sabun Mandi";
		break;
	case 'B':
		cout<<"Sabun Cuci";
		break;
	case 'C':
		cout<<"Deterjen";
		break;
	default :
		cout<<"Anda salah memasukkan kode";
		break;
	}
	getch();
}

