//Muhammad Alfan Ibnu Septiyan
//2305101088

#include <stdio.h>
using namespace std;
int main(void){
	
	int a, b, c, e, f, total, rata;
	
	a = 10;
	b = 35;
	c = 15;
	e = 18;
	f = 22;
	total = a + b + c + e + f;
	rata = total / 5;
	
	printf("MENGHITUNG RATA - RATA NILAI\n\n" );
	
	printf( "Nilai a :%d \n", a);
	printf( "Nilai b :%d \n", b);
	printf( "Nilai c :%d \n", c);
	printf( "Nilai e :%d \n", e);
	printf( "Nilai f :%d \n", f);
	
	printf("Total semua nilai :%d \n", total);
	printf("Rata-rata semua nilai :%d \n", rata);
	
	return 0;
}

