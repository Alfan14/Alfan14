#include<stdio.h>
#include<conio.h>
#include<stdlib.h> 
#define CLRSCR  system(“cls”);  

main()
{ 
	char nm1[20];
	char nm2[20];
	system("CLS"); 
	
	printf("Masukan nama ke-1 =");
	gets(nm1);
	printf("Masukkan nama ke-2 =");
	gets(nm2);
	printf("\n\n");
	
	printf("Senang berkenalan dengan Anda...%s",nm1);
	printf("\n\n");
	printf("Senang berkenalan dengan Anda..%s",nm2);
}
