#include <iostream>
using namespace std;

int main() {
    int angka;

input_angka:
    cout << "Masukkan Angka [1..10]: ";
    cin >> angka;

    if (angka >= 1 && angka <= 10) {
        cout << angka << endl;
    } else {
        cout << "Program berhenti karena memasukkan angka yang tidak tertera." << endl;
        goto end_angka;
    }

    goto input_angka;

end_angka:
    return 0;
}

