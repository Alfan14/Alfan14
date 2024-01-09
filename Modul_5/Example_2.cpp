#include<stdio.h>
#include<conio.h>
#include<iostream>
#include <cstring>
using namespace std;
main(){
	char pil,nb[10],ket[20],jwb;
	int kode,h,biaya,jb,total;
	lagi:
	system("CLS");//CONTOH LAT CASE DAN IF
	cout<<"TOKO BUNGA LESTARI"<<endl;
	cout<<"1.Melati  Rp.35000/Bungkus"<<endl;
	cout<<"2.Mawar   Rp.25000/Tangkai"<<endl;
	cout<<"3.Tulip   Rp.45000/Tangkai"<<endl;
	cout<<"Pilih Kode Bunga         :";cin>>kode;
	cout<<endl;
	cout<<"Pilih jenis pengiriman"<<endl;
	cout<<"A.Diantar"<<endl;
	cout<<"B.Tidak diantar"<<endl;
	cout<<"Pilihan Anda   :";cin>>pil;
	switch (kode)
	{
		case 1:
	{
		  strcpy(nb,"Melati");
		  h=35000;
	}break;
	case 2:
	{
		strcpy(nb,"Mawar");
		h=25000;
	}break;
	default:
	{
		strcpy(nb,"Tulip");
		h=45000;
	}break;
}
if(pil=='A'||pil=='a')
{
	strcpy(ket,"Diantar");
	biaya=10000;
}else
{
	strcpy(ket,"Tidak diantar");
	biaya=0;
}
cout<<"Jumlah Beli      :";cin>>jb;
total=(jb*h)+biaya;
system("CLS");
cout<<"            STRUK PEMBAYARAN"<<endl;
cout<<"-----------------------------"<<endl;
cout<<"Kode Bunga yang dipilih"<<kode<<endl;
cout<<"Nama Bunga            :"<<nb<<endl;
cout<<"Harga                Rp."<<h<<endl;
cout<<"Jenis Pengiriman anda   :"<<ket<<endl;
cout<<"Biaya Kirim         :Rp."<<biaya<<endl;
cout<<"Jumlah Beli         :RP."<<jb<<endl;
cout<<"=============================================="<<endl;
printf("Total Pembayaran   :Rp%2.2f\n",total);
cout<<"Input Data Lagi[Y/T";jwb=getche();
if (jwb=='Y'||jwb=='y')
goto lagi;
else
goto keluar;
getch();
keluar:
	;
}

