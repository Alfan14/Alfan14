#include<iostream>
using namespace std;
int main(){
	int a;
	int i;
	int j;
	for( i=1;i<=20;i++){
		a=0;
		for( j=1;j<=i;j++){
			if(i%j==0){
				a=a+1;
			}
		}
		if (a==2)
		cout<<i<<" ";
	}
}
