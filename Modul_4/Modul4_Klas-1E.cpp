#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	char nama[40];
	char nim[30];
	int nilai1,nilai2,nilai3,nilai4,n;
	float total;
	string grade;
	cout<<"Input:\n\n";
    cout<<"Masukan banyak data yang ingin diinput = ";
    cin>>n;
    cout<<endl<<endl;
    for (int i=0;i<n;i++){
	cout<<"Masukkan nama:";
	cin>>nama;
	cout<<"Masukkan nim:";
	cin>>nim;
	cout<<"Masukkan nilai tugas:";
	cin>>nilai1;
	cout<<"Masukkan nilai keaktifan :";
	cin>>nilai2;
	cout<<"Masukkan nilai UTS:";
	cin>>nilai3;
	cout<<"Masukkan nilai UAS:";
	cin>>nilai4;
	
	total=nilai1*0.2+nilai2*0.1+nilai3*0.3+nilai4*0.4;
}
	if (total>=90){
		grade='A';
	}
	else if(total>=85){
			grade='A-';
	}
	else if(total>=76){
			grade='B';
	}
	else if(total>=68){
			grade='B-';
	}
	else if(total>=55){
			grade='C';
	}
	else if(total>=45){
			grade='D';
	}
	else if(total>=0){
			grade='E';
	}
	{
	system ("cls");

	//output
	cout<<"Output:\n\n";
cout<<"===========================================================================================================================\n";
cout<<"|  No  |           Nama         |       Nim       | Nilai Tugas | Nilai UTS |  Nilai UAS| Nilai4 | Total nilai|Nilai huruf|\n";
cout<<"===========================================================================================================================\n";
 for(int i=0;i<n;i++){
  cout<<"| "<<setiosflags(ios::left)<<setw(5)<<i+1<<"|";
  cout<<" "<<setiosflags(ios::left)<<setw(25)<<nama<<"|";
  cout<<"   "<<setiosflags(ios::left)<<setw(8)<<nim<<"    |";
   cout<<"  "<<setiosflags(ios::left)<<setw(4)<<nilai1<<"  |";
  cout<<" "<<setiosflags(ios::left)<<setw(4)<<nilai2<<"    |";
  cout<<" "<<setiosflags(ios::left)<<setw(4)<<nilai3<<"    |";
  cout<<" "<<setiosflags(ios::left)<<setw(4)<<nilai4<<"    |";
  cout<<" "<<setiosflags(ios::left)<<setw(4)<<total<<"     |";
  cout<<" "<<setiosflags(ios::left)<<setw(6)<<grade<<"|";
  cout<<"\n========================================================================================================================\n";
}
}
}
