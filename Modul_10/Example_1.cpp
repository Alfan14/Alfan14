#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main(){
	int bil=1;
	system("CLS");
	do{
		if(bil>=6)
		break;
        printf("%d",bil);
	}
	while(bil++);
	getch();
}
