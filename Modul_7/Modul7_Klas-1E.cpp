#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Masukkan panjang pola:";
	cin>>n;
	
	cout<<"Pola menaik"<<endl;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			cout<<"";
		}
		for (int k=n;k>=i;k--){
			cout<<"*";
		}
		cout<<endl;
	}
 return 0;
}
