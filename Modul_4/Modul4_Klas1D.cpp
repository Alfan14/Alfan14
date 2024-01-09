#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int b,d;
	char a[30];
	double c,total;
	int n;
	
	//input
	for (int i=0;i<n;i++){
	cout<<"Data ke-"<<i+1<<endl;
	cout<<"Masukkan nama barang :";
	cin.getline(a,30);
	cout<<"Masukkan jumlah barang :";
	cin>>b;
	cout<<"Masukkan harga satuan :";
	cin>>c;
	cout<<"Masukkan jumlah barang :";
	cin>>d;
    }
	//perhitungan
	total=b*c*d;
	
	//output
	using std::cout;
    using std::setw;
    for(int i=0;i<n;i++){
    cout << setw(10) << "Nama Barang"   <<
        setw(15) <<  "Jumlah Barang" <<
        setw(16) << "Nilai angka" <<
        setw(18) << "Nilai huruf" << 
		setw(10) << "Total harga" <<'\n';
        cout<<left;
    cout << setw(10) <<a<<
        setw(30) <<b<< 
        setw(16) <<c<<
        setw(18) <<d<< 
		setw(10) <<total<<'\n';
        cout<<left;
    }
}
