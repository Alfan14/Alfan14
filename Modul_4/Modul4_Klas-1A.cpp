#include <iostream>
#include <iomanip>
using namespace std ;

int main(){
    float a;
	char grade;
	string c,b;
	int i=0;
	//input
	for(int i = 0; i < 2; i++){
	cout<<"Masukkan nama mahasiswa :";
	cin>>b;
	cout<<"Masukkan Mata kuliah :";
	cin>>c;
	cout<<"Masukkan nilai ujianmu :";
	cin>>a;
	if(a>=85){
		grade='A';
		a++;
	}
	else if (a>=70){
	    grade='B';
	    a++;
		 }
	else if (a>=69){
	     grade='C';
	     a++;
		 }
	else if (a>=49){
	    grade='D';
	    a++;
		 }
	else if (a>=0&&a<=39){
	    grade='E';
	    a++;
		 }
    else{
		cout<<"Diluar area angka seratus";
     	}
    //progam nilai huruf
    //output
    {
	for(int i = 0; i < 2; i++){
    cout<<endl;
    cout<<"Tabel Nilai Mahasiswa";
    cout<<endl<<endl;
    
    using std::cout;
    using std::setw;
    
    cout << setw(10) << "Nama mahasiswa"   <<
        setw(15) <<  "Mata kuliah" <<
        setw(16) << "Nilai angka" <<
        setw(18) << "Nilai huruf" << '\n';
        cout<<left;
    cout << setw(10) <<b<<
        setw(30) <<c<< 
        setw(16) <<a<<
        setw(18) <<grade<< '\n';
        cout<<left;
}
}
}
}

