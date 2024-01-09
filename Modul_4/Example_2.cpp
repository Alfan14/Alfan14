#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;


main(){
	float penghsl,jasa=0,komisi=0,total=0;
	system("CLS");
	
cout<<"Pendapatan hari ini Rp.";
cin>>penghsl;

if(penghsl>=0&&penghsl<=200000)
{
	jasa=10000;
	komisi=0.1*penghsl;
}
else
{
	if(penghsl<=500000)
{
	jasa=20000;
	komisi=0.15*penghsl;
}
else
{
	jasa=30000;
	komisi=0.2*penghsl;
}
}
/*menghitung total*/
total=komisi+jasa;

cout<<"Uang jasa Rp."<<jasa<<endl;
cout<<"Uang komisi Rp."<<komisi<<endl;
cout<<"========================="<<endl;
cout<<"Hasil total Rp."<<total<<endl;
getch();
}
