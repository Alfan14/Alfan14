#include <iostream>
using namespace std;
int main(){
   int pilihan;
   
   cout<<"Masukkan hari diantar 1-7 :";
   cin>>pilihan;
   
   switch(pilihan)
   {
   
   case 1 : {
   	cout<<"Hari Senin";
   	break;
   }
   case 2 : {
   	cout<<"Hari Selasa";
   	break; 
   }
   case 3 :{
   	cout<<"Hari Rabu";
   	break;
   }
   case 4 :{
   	cout<<"Hari Kamis";
   	break;
   }
   case 5 :{
   	cout<<"Hari Jumat";
   	break;
   }
   case 6 :{
   	cout<<"Hari Sabtu";
   	break;
   }
   case 7 :{
   	cout<<"Hari Minggu";
   	break;
   }
   default : {
   	cout<<"Angka salah";
   	break;
   }
}
   return 0;
}
