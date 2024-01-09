#include<iostream>
#include<stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;
 main(){
	int a,b;
	char lagi;
	atas:
		system("CLS");
		cout<<"Masukkan Bilangan =";
		cin>>a;
		printf("Nilai%d %2 adalah=%d",a,b);
		printf("\n\nIngin hitung lagi[Y/T]]:");
		lagi=getche();
		if(lagi=='Y'||lagi=='y')
		goto atas;
		getch();
}
