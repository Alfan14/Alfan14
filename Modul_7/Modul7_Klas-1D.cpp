#include<iostream>
using namespace std;
int main(){
	int n;
	int i,j;
	cout<<"Masukkan panjang pola:";
	cin>>n;
	cout << endl;
	
	   for (i=1;i<=4;i++) {
        for (j=1;j<=i;j++){
            cout<<j<<" "; // segitiga kanan
        }
		cout<<endl;
}
	return 0;
}

