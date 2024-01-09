#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main(){
	int bil=2;
	system("CLS");
	do{
		printf("%d",bil);
		bil+=2;
	}
	while(bil<=10);
	getch();
}
