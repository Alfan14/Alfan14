#include <iostream>
using namespace std;
int main() {
    int angka,n,masuk;
    int total = 0;
    int i = 0;
    double rata;
   
    cout<<"Input data ";
    cin>>n;

    do {
        cout << "Input Nilai  "<<masuk+1<<"=";
        cin >> angka;
        masuk++;
            total += angka; 
            i++; 
        }
     while (masuk <n);

        rata = static_cast<double>(total) / i;
        cout << "Total nilai: " << total<< std::endl;
        cout << "Rata-rata nilai: " << rata << std::endl;

    return 0;
}
 
