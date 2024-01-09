#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main(){
	int bil;
	system("CLS");
	
	for(bil=1;bil<=10;++bil)
	{
		if (bil==6)
		continue;
		
		printf(" %d",bil);
	}
	getch();
}
